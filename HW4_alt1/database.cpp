// database.cpp Hiromi Kageyama Oct. 9, 2020
// Write a create, read, update, and delete (CRUD) program

#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
#include "database.h"

using namespace std;

int main() {
	char choice;
	cout << "Welcome to the database." << endl;
	cout << " a. Add a book" << endl;
	cout << " b. Remove a book" << endl;
	cout << " c. Empty database" << endl;
	cout << " d. show number of books" << endl;
	cout << " e. show all of books" << endl;
	cout << " f. quit" << endl;
	cout << "Choose an option: ";
	while (cin >> choice) {
		if (choice != 'f') {
			crud(choice);
		}
		else {
			break;
		}
	}while (choice != 'f');
	return 0;
}