#include "Translator.h"

using namespace std;

vector<string> Translator::translate(vector<char> sentence) {
	unordered_map<char, string> alphabet = morseAlphabet();
	vector<string> translatedSentence;
	for (char letter : sentence) {
		translatedSentence.push_back(alphabet[letter]);
	}
	return translatedSentence;
}

string Translator::concatenate(vector<string> translated) {
	string sentence;
	for (string morse : translated) {
		sentence += morse;
		sentence += " ";
	}
	return sentence;
}

unordered_map<char, string> Translator::morseAlphabet() {
	unordered_map<char, string> alphabet = {
		{'a', ".-"},
		{'b', "-..."},
		{'c', "-.-."},
		{'d', "-.."},
		{'e', "."},
		{'f', "..-."},
		{'g', "--."},
		{'h', "...."},
		{'i', ".."},
		{'j', ".---"},
		{'k', "-.-"},
		{'l', ".-.."},
		{'m', "--"},
		{'n', "-."},
		{'o', "---"},
		{'p', ".--."},
		{'q', "--.-"},
		{'r', ".-."},
		{'s', "..."},
		{'t', "-"},
		{'u', "..-"},
		{'v', "...-"},
		{'w', ".--"},
		{'x', "-..-"},
		{'y', "-.--"},
		{'z', "--.."},
		{' ', "/"}
	};
	return alphabet;
}