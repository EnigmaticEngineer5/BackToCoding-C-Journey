#include <iostream>
#include <limits>

#include "challenge.h"

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main() {
	cout << "Hello! Please, enter two numbers to perform basic operations on them (separate them by a space) --> ";
	double num1{}, num2{};
	cin >> num1 >> num2;

	while (cin.fail()) {
		handleFailedInput1(num1, num2);
	}

	while (num2 == 0) {
		cout << "\nDivison by zero not allowed! Re-enter a second valid option --> ";
		cin >> num2;

		while (cin.fail()) {
			handleFailedInput2(num2);
		}
	}

	cout << "\nThe resulting values the basic operations are:"
		<< "\n\t1) Sum --> " << (num1 + num2)
		<< "\n\t2) Difference --> " << (num1 - num2)
		<< "\n\t3) Product --> " << (num1 * num2)
		<< "\n\t4) Quotient --> " << (num1 / num2) << '\n';

	return 0;
}

void handleFailedInput1(double& num1, double& num2)
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Only numeric entries accepted! Try again re-entering the both numbers again --> ";
	cin >> num1 >> num2;
}

void handleFailedInput2(double& number)
{
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Only numeric entries accepted! Try again re-entering the mistaken number again --> ";
	cin >> number;
}
