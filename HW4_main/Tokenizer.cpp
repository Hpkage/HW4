#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::getline;
using std::istringstream;

bool readLine(string& str) {
	if (getline(cin, str)) {
		return true;
	}
}
