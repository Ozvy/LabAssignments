#include<iostream>

/**
 * @file Lab8_ewhittington.cpp
 * @author Ender Whittington
 * @date 2026-03-28
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */

/**
 * @brief Entry point for the memory demonstration.
 * @return 0 to indicate success.
 */

using namespace std;

int main() {
	int stackInt = 10;
	int *heapInt = new int;
	*heapInt = 20;
	int *ptrToStack = nullptr;
	ptrToStack = &stackInt;
	
	int &refToStack = stackInt;

	std::cout << "Stack Variable (stackInt):" << endl;
	std::cout << "Value: " << stackInt << endl;
	std::cout << "Address: " << &stackInt << endl << endl;

	std::cout << "Heap Variable (heapInt):" << endl;
	std::cout << "Value: " << *heapInt << endl;
	std::cout << "Address: " << heapInt << endl << endl;

	std::cout << "Stack Variable (ptrToStack):" << endl;
	std::cout << "Value Pointed To: " << *ptrToStack << endl;
	std::cout << "Address Stored " << ptrToStack << endl << endl;

	std::cout << "Stack Variable (refToStack):" << endl;
	std::cout << "Value Referred To: " << refToStack << endl;
	std::cout << "Address: " << &refToStack << endl << endl;
	

	delete heapInt;
	return 0;
}