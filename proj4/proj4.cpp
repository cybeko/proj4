#include <iostream> 
using namespace std;

class Fraction
{
	int numerator;
	int denominator;
public:
	void setNumerator(int num)
	{
		numerator = num;
	}
	void setDenominator(int num)
	{
		if (num != 0)
		{
			denominator = num;
		}
	}
	void inpFraction(int x, int y)
	{	
		numerator = x;
		if (y != 0)
		{
			denominator = y;
		}
	}
	int getNumerator()
	{
		return numerator;
	}
	int getDenominator()
	{
		return denominator;
	}
	void printFraction()
	{
		cout << "Fraction: " << numerator << "/" << denominator << endl;

	}
	void add(int x, int y)
	{
		numerator = (numerator * y) + (x * denominator);
		denominator = denominator * y;
		reduce();

	}
	void subtract(int x, int y)
	{
		numerator = (numerator * y) - (x * denominator);
		denominator = denominator * y;
		reduce();

	}
	void multiply(int x, int y)
	{
		numerator = numerator * x;
		denominator = denominator * y;
		reduce();

	}
	void divide(int x, int y)
	{
		if (y != 0)
		{
			numerator = numerator * y;
			denominator = denominator * x;
			reduce();
		}
		else
		{
			cout << "Can't divide by zero." << endl;
		}
	}
	void reduce()
	{
		int a = numerator;
		int b = denominator;

		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		numerator /= a;
		denominator /= a;
	}
};

int main()
{
	Fraction a;

	a.inpFraction(1,6);
	a.printFraction();

	a.add(2, 8);
	a.printFraction();

	a.divide(1, 6);
	a.printFraction();

	a.subtract(1, 3);
	a.printFraction();

	a.multiply(4, 9);
	a.printFraction();
}
