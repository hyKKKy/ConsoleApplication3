#include <iostream>
																	// 1 - numerator
class Fraction														// --																
{																	// 2 - denominator
private:
	double numerator;
	double denominator;
public:
	Fraction() {
		numerator = NULL;
		denominator = 1;
	}

	void MultyFraction(double numer1, double denomin1, double numer2, double denomin2) {
		if (denomin1 == 0 || denomin2 == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return;
		}
		numerator = numer1 * numer2;
		denominator = denomin1 * denomin2;
	}

	void DevideFraction(double numer1, double denomin1, double numer2, double denomin2) {
		if (denomin1 == 0 || denomin2 == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return;
		}
		numerator = numer1 * denomin2;
		denominator = denomin1 * numer2;
	}

	void SumFraction(double numer1, double denomin1, double numer2, double denomin2) {
		if (denomin1 == 0 || denomin2 == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return;
		}
		denominator = denomin1 * denomin2;
		double new_numerator1 = numer1 * denomin2;
		double new_numerator2 = numer2 * denomin1;
		numerator = new_numerator1 + new_numerator2;
	}

	void MinusFraction(double numer1, double denomin1, double numer2, double denomin2) {
		if (denomin1 == 0 || denomin2 == 0) {
			std::cout << "You can't divide by zero! Error!!!" << std::endl;
			return;
		}
		denominator = denomin1 * denomin2;
		double new_numerator1 = numer1 * denomin2;
		double new_numerator2 = numer2 * denomin1;
		numerator = new_numerator1 - new_numerator2;
	}

	void PrintResult() {
		std::cout << "Result is: " << numerator / denominator << std::endl;
	}

};

int main()
{
	Fraction fraction1;

	//fraction1.MultyFraction(1,3,2,3);
	//fraction1.PrintResult();
	
	fraction1.DevideFraction(1, 0, 2, 3);
	fraction1.PrintResult();

	//fraction1.SumFraction(1, 3, 2, 3);
	//fraction1.PrintResult();
	
	//fraction1.MinusFraction(1, 3, 2, 3);
	//fraction1.PrintResult();

}

