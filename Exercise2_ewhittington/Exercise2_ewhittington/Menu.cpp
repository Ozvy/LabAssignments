#include "Menu.h"
#include <iostream>
#include <string>

using namespace std;

string Menu::getInputText() {
	string text;

	cout << "Enter the text you want to translate. Can't be more than 50 letters." << endl;

	

	bool running = true;
	while (running) {
		getline(cin, text);
		if (text.length() <= 50 && text.length() > 0) {
			return text;
		}
		else {
			cout << "Error: Text can not be greater than 50 or less than or Equal to 0." << endl;
		}
	}
}

vector<char> Menu::setupTranslation() {
	string text = getInputText();

	vector<char> sentence; 
	for (char i : text) {
		sentence.push_back(tolower(i));
	}
	return sentence;
}

void Menu::printTranslatedText(string text) {
	cout << "Translated: " << text << endl;
}
	