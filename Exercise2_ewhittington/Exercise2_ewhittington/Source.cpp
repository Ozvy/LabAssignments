#include<iostream>
#include "Translator.h"
#include "Menu.h"

/**
 * @file Exercise2_username.cpp
 * @author Ender Whittington
 * @date 2026-4-19
 * @brief This program translates a given input into morse code, limit 50 characters.
 */

int main() {
	/**
	 * @brief acts as the main loop for all the class functions.
	 * @param none
	 * @return 0
	 */
	bool isRunning = true;

	Translator translator;
	Menu menu;

	while (isRunning) {
		char question;

		vector<char> sentence = menu.setupTranslation();
		string translatedSentence = translator.concatenate(translator.translate(sentence));

		menu.printTranslatedText(translatedSentence);
		
		cout << "Do you want to keep translating? (y/n)" << endl;
		cin >> question;
		cin.ignore(1000, '\n');
		if (tolower(question) == 'n') {
			isRunning = false;
		}
	}
	
	

}	
