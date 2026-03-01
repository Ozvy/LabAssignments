#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void arraySolution() {
	/**
	* @brief: Calculates the highest score, lowest score, and the average of all scores using a fixed-size static array.
	* @param: None.
	* @return: None (void).
	*/

	int scoreList[10];
	int gradeScore;
	int highestGrade = 0;
	int lowestGrade = 100;
	int average = 0;
	bool isRunning = true;

	std::cout << "Please enter 10 whole number grades between 0 and 100." << endl;
	
	for (int grade = 0; grade < 10; grade++) {
		while (isRunning) {
			std::cout << "Enter your value:";
			cin >> gradeScore;
			if (gradeScore >= 0 && gradeScore <= 100) {
				scoreList[grade] = gradeScore;
				isRunning = false;
			}
			else {
				std::cout << "That is not an integer between 0 and 100. Please try again." << endl;
			}
		}
		isRunning = true;
	}

		for (int grade : scoreList) {
			if (grade > highestGrade) {
				highestGrade = grade;
			}
			if (grade < lowestGrade) {
				lowestGrade = grade;
			}
			average += grade;
		}
		std::cout << "The highest grade is " << highestGrade << "." << endl;
		std::cout << "The lowest grade is " << lowestGrade << "." << endl;

		average /= 10;
		std::cout << "The average of all scores is " << average << "." << endl;
}
void vectorSolution() {
	/**
	* @brief: Calculates the highest score, lowest score, and the average of all scores using a dynamic vector. Additionally displays the list.
	* @param: None.
	* @return: None (void).
	*/
	std::vector<int> grades;
	int gradeScore;
	int highestGrade = 0;
	int lowestGrade = 100;
	int average = 0;

	bool isRunning = true;
	std::cout << "Enter the amount of grade score integers you want between 0 and 100, one at a time." << endl << "Type -1 when you are done." << endl;
	while (isRunning == true) {
		std::cout << "Enter a grade score: ";
		std::cin >> gradeScore;

		if (gradeScore >= 0 && gradeScore <= 100) {
			grades.push_back(gradeScore);
		}
		else if (gradeScore == -1) {
			isRunning = false;
		}
		else {
			std::cout << "That is not an integer between 0 and 100. Please try again." << endl;
		}
	}

	for (int grade = 0; grade < grades.size(); grade++) {
		if (grades.at(grade) > highestGrade) {
			highestGrade = grades.at(grade);
		}
		if (grades.at(grade) < lowestGrade) {
			lowestGrade = grades.at(grade);
		}
		average += grades.at(grade);
	}
	std::cout << "The highest grade is " << highestGrade << "." << endl;
	std::cout << "The lowest grade is " << lowestGrade << "." << endl;

	average /= 10;
	std::cout << "The average of all scores is " << average << "." << endl;

	std:sort(grades.begin(), grades.end());
	std::cout << "Grade List: ";
	for (int grade = 0; grade < grades.size(); grade++) {
		std::cout << grades.at(grade) << " ";
	}
		
}