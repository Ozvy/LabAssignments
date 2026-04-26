#include<iostream>
#include<vector>
#include<string>
#include<stdexcept>

/**
* @File Lab11_ewhittington.cpp
* @Author: Ender Whittington
* @Date: 2026-04-26
* @brief Asks the user for an input and outputs the city name at the index integer given. Catches an error if input given is out of range.
*/
using namespace std;

int main() {
	
	/**
	* @brief: Entry point of the program.
	* @param: None.
	* @return: 0 to indicate success.
	*/

	vector<string> cities = { "Columbus", "Cleveland", "Toledo", "Cincinnati", "Dayton" };
	
	int indexNumber;

	cout << "Enter an index to look up a city: ";
	cin >> indexNumber;
	try {
		string cityIndex = cities.at(indexNumber);
		cout << "City at index " << indexNumber << " is: " << cityIndex << endl;
	}
	catch (const std::out_of_range) {
		if (indexNumber < 0) {
			cout << "Invalid index. Here's the first city instead: " << cities.front() << endl;
		}
		else if (indexNumber >= cities.size()) {
			cout << "Invalid index. Here's the last city instead: " << cities.back() << endl;
		}
	}
}

