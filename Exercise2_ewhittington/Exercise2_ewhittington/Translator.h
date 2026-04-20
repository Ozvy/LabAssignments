#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Translator {
	public:
		
		string concatenate(vector<string> translated);
		vector<string> translate(vector<char> sentence);
		
	private:
		
		
		unordered_map<char, string> morseAlphabet();
};