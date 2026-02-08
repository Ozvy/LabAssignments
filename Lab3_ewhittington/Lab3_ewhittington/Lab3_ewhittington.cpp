#include<iostream>

using namespace std;

/**
* @File Lab3_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-2-8
* @brief A program that can calculate the area of a rectangle or circle based on user input.
*/

int main() {

	int menuSelection;

	std::cout << "Menu" << std::endl;
	std::cout << "1. Calculate the Area of a Rectangle" << std::endl;
	std::cout << "2. Calculate the Area of a Circle" << std::endl;
	std::cout << "3. Quit" << std::endl;
	std::cout << "Please makes a menu selection:";

	std::cin >> menuSelection;
	if (menuSelection == 1) {
		float length;
		float width;

		std::cout << "Please enter the length of a rectangle:";
		std::cin >> length;

		std::cout << "Please enter the width of a rectangle:";
		std::cin >> width;

		float area = length * width;
		std::cout << "The area of the rectangle is: " << area;
	}
	else if (menuSelection == 2) {
		float radius;
		const double pi = 3.1415926535897932384626433832795028841971693993751058209749445923;

		std::cout << "Please enter the radius of a circle:";
		std::cin >> radius;

		float area = pi * (radius * radius);
		std::cout << "The area of the circle is: " << area;
	}
	else if (menuSelection == 3) {
		exit(0);
	}


}
