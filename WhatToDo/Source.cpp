#include <iostream>
#include <string>

const bool isPrime(const int);

int main() {
	std::string message1{}, message2{}, message3{}, userName{};
	int userAge{};

	std::cout << "Enter your name here --> ";
	std::getline(std::cin, userName);

	std::cout << "Enter your age here --> ";
	std::cin >> userAge;

	std::cout << "\nHello [" << userName << "]! You were born in [" << ( 2024 - userAge) << "].";

	if (userAge < 18) {
		std::cout << "\nYou are a minor.";
	}
	else {
		std::cout << "\nYou are an adult";
	}

	//1. Basics: Input/Output, Variables, and Control Flow - COMPLETED




	return 0;
}

const bool isPrime(const int numberToTest)
{
	if(numberToTest)
	return 0;
}
