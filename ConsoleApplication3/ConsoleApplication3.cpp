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
	Fraction() {
		numerator = NULL;
		numerator1 = NULL;
		denominator = 1;
		denominator1 = 1;
		result = NULL;
		user_operator = ' ';
	}
	void SetNumerator(int value) {
		numerator = value;
	}
	void SetDenominator(int value) {
		if(value == 0){
			std::cout << "Denominator can't be 0 \nUsing a default value 1 as a denominator" << std::endl;
			return;
		}
		else{
			denominator = value;
		}
	}
	void SetNumerator1(double value) {
		numerator1 = value;
	}
	void SetDenominator2(double value) {
		if(value == 0){
			std::cout << "Denominator can't be 0 \n Using a default value 1 as a denominator" << std::endl;
			return;
		}
		else{
			denominator1 = value;
		}
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
		double new_numerator1 = numerator * denominator1;
		double new_numerator2 = numerator1 * denominator;
		result = (new_numerator1 + new_numerator2) / common_denominator;
	}

	void MinusFraction() {
		double common_denominator = denominator * denominator1;
		double new_numerator1 = numerator * denominator1;
		double new_numerator2 = numerator1 * denominator;
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
	fraction1.SetDenominator(0);
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

