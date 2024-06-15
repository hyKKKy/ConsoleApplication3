#include <iostream>
																	// 1 - numerator
class Fraction														// --																
{																	// 2 - denominator
private:
	double numerator;
	double denominator;
	double numerator1;
	double denominator1;
	double result;
	char user_operator;
public:
	void SetNumerator(int value) {
		numerator = value;
	}
	void SetDenominator(int value) {
		denominator = value;
	}
	void SetNumerator1(int value) {
		numerator1 = value;
	}
	void SetDenominator2(int value) {
		denominator1 = value;
	}
	void SetUserOperator(char symbol) {
		user_operator = symbol;
	}
	void MultyFraction() {
		result = (numerator * numerator1) / (denominator * denominator1);
	}
	void DevideFraction() {
		result = (numerator * denominator1) / (denominator * numerator1);
	}
	void SumFraction() {
		double common_denominator = denominator * denominator1;
		int new_numerator1 = numerator * denominator1;
		int new_numerator2 = numerator1 * denominator;
		result = (new_numerator1 + new_numerator2) / common_denominator;
	}

	void MinusFraction() {
		double common_denominator = denominator * denominator1;
		int new_numerator1 = numerator * denominator1;
		int new_numerator2 = numerator1 * denominator;
		result = (new_numerator1 - new_numerator2) / common_denominator;
	}
	void PrintResult() {
		std::cout << numerator << "/" << denominator << " " << user_operator << " " << numerator1 << "/" << denominator1 << " = " << result << std::endl;
	}
};

int main()
{
	Fraction fraction1;
	fraction1.SetNumerator(3);
	fraction1.SetDenominator(5);
	fraction1.SetNumerator1(4);
	fraction1.SetDenominator2(3);

	fraction1.SetUserOperator('*');
	fraction1.MultyFraction();
	fraction1.PrintResult();

	fraction1.SetUserOperator('/');
	fraction1.DevideFraction();
	fraction1.PrintResult();

	fraction1.SetUserOperator('+');
	fraction1.SumFraction();
	fraction1.PrintResult();

	fraction1.SetUserOperator('-');
	fraction1.MinusFraction();
	fraction1.PrintResult();

}

