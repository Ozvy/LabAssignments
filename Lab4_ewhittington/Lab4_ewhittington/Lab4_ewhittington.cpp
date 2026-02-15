#include<iostream>

using namespace std;

/**
* @File Lab4_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-2-15
* @brief A program that generates a multiplication table based on input.
*/

int main() {
	bool isRunning = true;
	bool isCreatingTable = true;

	int columnMulti = 1;
	int rowMulti = 1;
	int maxDigit;
	std::cout << "Please enter the maximum digit for the multiplication table." << endl;
	std::cout << "The digit must be greater than 4 and less than 10" << endl;

	while (isRunning) {
		std::cout << "Max Digit: ";
		std::cin >> maxDigit;

		if (maxDigit < 10 && maxDigit > 4) {
			while (rowMulti <= maxDigit) {

				while (columnMulti <= maxDigit) {
					std::cout << rowMulti * columnMulti << "\t";
					columnMulti += 1;
				}
				std::cout << endl;
				columnMulti = 1;
				rowMulti += 1;
			}

			isRunning = false;
		}
		else {
			std::cout << "Error: The max digit must be greater than 4 and less than 10. Please try again." << endl;
		}
	}
	

}