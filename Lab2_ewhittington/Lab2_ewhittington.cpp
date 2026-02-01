#include<iostream>

using namespace std;

/**
* @File Lab2_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-2-1
* @brief A program that calculates a triangle's perimeter from user input.
*/

int main() {

	float length;
	float width;

	std::cout << "This application will calculate the perimeter of a rectangle." << std::endl << std::endl;
	std::cout << "Please enter the length of the rectangle:";
	std::cin >> length;
	std::cout << "Please enter the width of the rectangle:";
	std::cin >> width;

	float perimeter = 2 * (length + width);

	std::cout << "The perimeter of the rectangle is: " << perimeter;

}