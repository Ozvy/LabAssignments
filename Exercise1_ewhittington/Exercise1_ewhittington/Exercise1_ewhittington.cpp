#include <iostream>
#include "Func_Exercise1.h"

/**
 * @file Exercise1_username.cpp
 * @author Ender Whittington
 * @date 2025-03-07
 * @brief This program validates UPC-A barcodes performing the UPC-A check digit algorithm.
 */

int main() {
	/**
	* @brief: Entry point of the program.
	* @param: None.
	* @return: 0 to indicate success.
	*/
	bool isRunning = true;
	char yesNo;

	int firstNum;
	int checkDigit;
	int manuNumber;
	int prodNumber;
	int upc;

	while (isRunning) {
		std::cout << "Do you have a number to test? (y or n): ";
		std::cin >> yesNo;

		if (std::toupper(yesNo) == 'Y') {
			std::cout << "Enter the very first number of the UPC: ";
			std::cin >> firstNum;
			std::cout << "Enter the very last number of the UPC: ";
			std::cin >> checkDigit;
			std::cout << "Enter your manufacturer number (the first set of 5 digits) ";
			std::cin >> manuNumber;
			std::cout << "Enter your product number (the second set of 5 digits) ";
			std::cin >> prodNumber;

			std::string upcCode = concatUPC(firstNum, manuNumber, prodNumber);
			std::vector<int> upcDigits = convertUPC(upcCode);


			if (getCheckDigit(sumEvenNumbers(upcDigits), sumOddNumbers(upcDigits)) == checkDigit) {
				cout << "UPC code " << upcCode << checkDigit << " is valid." << endl;
			}
			else {
				cout << "Invalid UPC code." << endl;
			}
		}
		else if (toupper(yesNo) == 'N') {
			isRunning = false;
		}

	}
	
}