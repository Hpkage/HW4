// Tokenizertest.cpp Hiromi Kageyama Oct. 5, 2020
// Write a c++ program that separates what the user types into tokens

#include <iostream>
#include <vector>
#include "Tokenizer.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

int main() {
	string str;
	const string input;
	vector<string> tokens;
	cin >> str;
	readLine(str);
	stringToTokensWS(input, tokens);

	return 0;
}