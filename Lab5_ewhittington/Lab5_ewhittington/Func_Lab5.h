#pragma once
#include<iostream>

using namespace std;

void printInputValidationError() {
	/**
	* @brief: Outputs an error message for if the user inputs a value that doesn't meet the input requirements.
	* @param: None.
	* @return: None (void).
	*/

	std::cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
}
bool isMaxDigitInputValid(int input) {
	/**
	* @brief: Checks if the input given is greater than 4 and less than 10. 
	* @param: input - The user-provided integer to validate.
	* @return: true if the input is greater than 4 and less than 10; false otherwise.
	*/

	if (input < 10 && input > 4) {
		return true;
	}
	else {
		return false;
	}
}

int getMaxDigitInput() {
	/**
	* @brief: Prompts the user for an input, and ensures that it is within the valid range.
	* @param: input- the user-provided integer to validate.
	* @return: A validated int representing the maximum digit.
	*/

	bool isRunning = true;
	while (isRunning) {

		int maxDigit;
		std::cout << "Max Digit: ";
		std::cin >> maxDigit;
		if (isMaxDigitInputValid(maxDigit)) {
			return maxDigit;
		}
		else {
			printInputValidationError();
		}
	}
}
void printMultiplicationTable(int maxDigit) {
	/**
	* @brief: Prints a formatted multiplication table given the user's inputted number.
	* @param: maxDigit - The highest digit to include in the table.
	* @return: None (void).
	*/

	int columnMulti = 1;
	int rowMulti = 1;
	while (rowMulti <= maxDigit) {

		while (columnMulti <= maxDigit) {
			std::cout << rowMulti * columnMulti << "\t";
			columnMulti += 1;
		}
		std::cout << endl;
		columnMulti = 1;
		rowMulti += 1;
	}

}