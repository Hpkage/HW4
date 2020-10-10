#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Tokenizer.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::vector;
using std::string;
using std::istringstream;

bool readLine(string& str) {
	if (getline(cin, str)) {
		return true;
	}
	else {
		return false;
	}
}

unsigned stringToTokensWS(const string& str, vector<string>& tokens) {
	for (int i = 0; i < tokens.size(); i++) {
		string value;
		istringstream instream(tokens[i]);
		instream >> value;

		if (!instream) {
			cout << "Please, no numbers.";
		}
		else {
			cout << value << endl;
		}
	}
	return 0;
}

