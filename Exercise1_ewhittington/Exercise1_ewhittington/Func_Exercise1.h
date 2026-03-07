#pragma once
#include<iostream>
#include <vector>
#include <string>

using namespace std;

std::string concatUPC(int firstNum, int manuNumber, int prodNumber) {
	/**
	* @brief: Combines the first, manufacturer number, and product number into one string.
	* @param: firstNum - the first number of the UPC code. ManuNumber - the manufacturer number. prodNumber - The production Number.
	* @return: the UPC code as a string.
	*/
	std::string UPCnum;
	long long UPC;
	UPCnum = to_string(firstNum) + to_string(manuNumber) + to_string(prodNumber);

	return UPCnum;
}

std::vector<int> convertUPC(string upcCode) {
	/**
	* @brief: Converts the string into a vector.
	* @param: upcCode - the upc code combined into one string
	* @return: the numDigits vector.
	*/
	std::vector<int> numDigits;
	for (char digit : upcCode) {
		numDigits.push_back(digit - '0');
	}
	return numDigits;

}
int sumOddNumbers(std::vector<int> UPC) {
	/**
	* @brief: For every odd placement in the vector, add it to the sum. Then, multiply by 3.
	* @param: UPC - the vector containing single digits of the upc code.
	* @return: the sum.
	*/
	int sum = 0;

	for (int i = 0; i < UPC.size(); i++) {
		if (i % 2 == 0) {
			sum += UPC[i];
		}
	}
	sum *= 3;
	return sum;
}

int sumEvenNumbers(std::vector<int> UPC) {
	/**
	* @brief: For every even placement in the vector, add it to the sum.
	* @param: UPC - the vector containing single digits of the upc code.
	* @return: the sum.
	*/
	int sum = 0;

	for (int i = 0; i < UPC.size(); i++) {
		if (i % 2 != 0) {
			sum += UPC[i];
		}
	}
	return sum;
}

int getCheckDigit(int evenSum, int oddSum) {
	/**
	* @brief: Combines the even sum and the odd sum together into the checkDigit.
	* @param: evenSum - the sum of all the even positioned UPC digits. oddSum - thee sum of all the odd positioned UPC digits.
	* @return: the checkDigit.
	*/
	int sum = (evenSum + oddSum) % 10;
	int checkDigit = 10;

	if (sum != 0) {
		checkDigit -= sum;
	}
	else {
		checkDigit = 0;
	}

	return checkDigit;
}
