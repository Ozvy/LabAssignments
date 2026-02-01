#include<iostream>
#include<string>

using namespace std;

/**
* @File Lab1_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-1-25
* @brief A program that greets the user by the names given by prompt.
*/

int main() {
	std::string firstName;
	std::string lastName;
	std::cout << "Enter your first name.";
	std::cin >> firstName;
	std::cout << "Enter your last name.";
	std::cin >> lastName;
	std::cout << "Welcome to C++ Programming, " << firstName << " " << lastName;
}
