#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
#include "database.h"

using namespace std;

void Add(char choice) {
    string bookname;
    string authorname;
    string fullbook;
    vector<string> bookarray;
        if (choice == 'a') {
            cout << "please enter name of book: ";
            cin >> bookname;
            cout << "please enter author name: ";
            cin >> authorname;
            fullbook = bookname + " " + authorname;
            bookarray.push_back(fullbook);
            cout << "Book has been added" << endl;
        }
    return;
}

void Delete(char choice) {
    string removebook;
    vector<string> bookarray;
    if (choice == 'b') {
        cout << "Please enter book number to delete: ";
        cin >> removebook;
        for (int i = 0; i < bookarray.size(); i++) {
            if (bookarray[i].find(removebook) != std::string::npos) {
                bookarray.erase(bookarray.begin() + i);
                break;
            }
        }
        cout << " " << endl;
        cout << "book has been removed" << endl;
        cout << " " << endl;
    }
    return;
}

void Clear(char choice) {
    vector<string> bookarray;
    if (choice == 'c') {
        bookarray.clear();
        cout << "Database cleared" << endl;
        cout << " " << endl;
    }

    return;
}

void ReadNum(char choice) {
    int countnum;
    string fullbook;
    vector<string> bookarray;
    if (choice == 'd') {
        countnum = bookarray.size();
        cout << "number of books in array: " << countnum << endl;
    }
    return;
}

void NameBooks(char choice) {
    vector<string> bookarray;
    if (choice == 'e') {
        cout << "name of books in array " << endl;
        for (int i = 0; i < bookarray.size(); i++) {
            cout << i << " " << bookarray[i] << " " << endl; ;

        }
        cout << " " << endl;

    }
    return;
}