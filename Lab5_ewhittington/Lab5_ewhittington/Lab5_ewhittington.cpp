#include<iostream>
#include "Func_Lab5.h"

using namespace std;

/**
* @File Lab5_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-2-22
* @brief A program that generates a multiplication table based on input.
*/

int main() {
	/**
	* @brief: Entry point of the program.
	* @param: None.
	* @return: 0 to indicate success.
	*/

	std::cout << "Please enter the maximum digit for the multiplication table." << endl;
	std::cout << "The digit must be greater than 4 and less than 10" << endl;

	int maxDigit = getMaxDigitInput();
	printMultiplicationTable(maxDigit);
	
}