#include <iostream>
																	// 1 - numerator
class Fraction														// --																
{																	// 2 - denominator
private:
	double numerator;
	double denominator;
public:
	Fraction() {
		numerator = 0;
		denominator = 1;
	}
	Fraction(double n, double d) {
		numerator = n;
		if (d == 0) {
			std::cout << "error!" << std::endl;
			return;
		}
		else
		{
			denominator = d;
		}
	}

	Fraction MultyFraction(Fraction obj) {
		if (obj.denominator == 0 || denominator == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return Fraction();
		}
		double tmp_numerator = obj.numerator * numerator;
		double tmp_denominator = obj.denominator * denominator;

		Fraction result(tmp_numerator, tmp_denominator);

		return result;
	}

	Fraction DevideFraction(Fraction obj) {
		if (obj.denominator == 0 || denominator == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return Fraction();
		}
		double tmp_numerator = numerator * obj.denominator;
		double tmp_denominator = denominator * obj.numerator;

		Fraction result(tmp_numerator, tmp_denominator);

		return result;
	}

	Fraction SumFraction(Fraction obj) {
		if (obj.denominator == 0 || denominator == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return Fraction();
		}
		double common_denominator = obj.denominator * denominator;
		double new_numerator1 = numerator * obj.denominator;
		double new_numerator2 = obj.numerator * denominator;

		double tmp_numerator = new_numerator1 + new_numerator2;
		double tmp_denominator = common_denominator;

		Fraction result(tmp_numerator, tmp_denominator);

		return result;
	}

	Fraction MinusFraction(Fraction obj) {
		if (obj.denominator == 0 || denominator == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return Fraction();
		}
		double common_denominator = obj.denominator * denominator;
		double new_numerator1 = numerator * obj.denominator;
		double new_numerator2 = obj.numerator * denominator;\

		double tmp_numerator = new_numerator1 - new_numerator2;
		double tmp_denominator = common_denominator;

		Fraction result(tmp_numerator, tmp_denominator);

		return result;
	}
	
	void PrintResult() {
		std::cout << "Result is: " << numerator << "/" << denominator << " or " << numerator / denominator << std::endl;
	}

};

int main()
{
	Fraction fraction1(1,2);

	Fraction fraction2(1,2);

	Fraction fraction3;

	fraction3 = fraction2.MultyFraction(fraction1);
	fraction3.PrintResult();

	fraction3 = fraction2.DevideFraction(fraction1);
	fraction3.PrintResult();

	fraction3 = fraction2.SumFraction(fraction1);
	fraction3.PrintResult();

	fraction3 = fraction2.MinusFraction(fraction1);
	fraction3.PrintResult();

}

