#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include "database.h"

using namespace std;

void Add(char choice, vector<string>& bookarray) {
    string bookname;
    string authorname;
    string fullbook;

        if (choice == 'a') {
            cout << "Enter book's name (Please use the '_' character to replace the spacebar): ";
            cin >> bookname;
            cout << "Enter the author's name (Please use the '_' character to replace the spacebar): ";
            cin >> authorname;
            fullbook = bookname + " By: " + authorname;
            bookarray.push_back(fullbook);
            cout << "Book has been added" << endl;
        }
    return;
}

void Delete(char choice, vector<string>& bookarray) {
    int removebook;

    if (choice == 'b') {
        cout << "Please enter book number to delete: ";
        cin >> removebook;
        for (int i = 0; i < bookarray.size(); i++) {
            if (bookarray[i].find(removebook) == string::npos) {
                bookarray.erase(bookarray.begin() + removebook);
                break;
            }
        }
        cout << " " << endl;
        cout << "book has been removed" << endl;
        cout << " " << endl;
    }
    return;
}

void Clear(char choice, vector<string>& bookarray) {

    if (choice == 'c') {
        bookarray.clear();
        cout << "Database cleared" << endl;
        cout << " " << endl;
    }

    return;
}

void ReadNum(char choice, vector<string>& bookarray) {
    int countnum;
    string fullbook;

    if (choice == 'd') {
        countnum = bookarray.size();
        cout << "number of books in array: " << countnum << endl;
    }
    return;
}

void NameBooks(char choice, vector<string>& bookarray) {

    if (choice == 'e') {
        cout << "name of books in array " << endl;
        for (int i = 0; i < bookarray.size(); i++) {
            cout << i << " " << bookarray[i] << " " << endl; ;

        }
        cout << " " << endl;

    }
    return;
}