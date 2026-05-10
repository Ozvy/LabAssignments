#include "CatsAndCougars.h"
#include <vector>
#include <string>
using namespace std;


CatsAndCougars::CatsAndCougars()
{
	reset();
}


int CatsAndCougars::getCats()
{
	return cats;
}


int CatsAndCougars::getCougars()
{
    return cougars;
}

void CatsAndCougars::count(string lword, string rword)
{
	reset();
	
	vector<char> hiddenChars(lword.begin(), lword.end());
	vector<char> playerGuessChars(rword.begin(), rword.end());

	for (int i = 0; i <= hiddenChars.size() - 1; ++i) {
		if (hiddenChars.at(i) == playerGuessChars.at(i)) {
			cats += 1;
		}
		else {
			for (int i2 = 0; i2 <= hiddenChars.size() - 1; ++i2) {
				if (playerGuessChars.at(i) == hiddenChars.at(i2)) {
					cougars += 1;
				}
			}
		}
	}
}


void CatsAndCougars::reset()
{
	cats = 0;
	cougars = 0;
	
	
}