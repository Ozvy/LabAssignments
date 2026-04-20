#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Menu {
public:
	vector<char> setupTranslation();
	void printTranslatedText(string text);
	
	
private:
	string getInputText();
	
};