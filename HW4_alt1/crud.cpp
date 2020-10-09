#include <iostream>
#include <vector>
#include <algorithm>
#include<array>

using namespace std;

void crud() {
    char choice;
    string bookname;
    string removebook;
    int countnum;
    string authorname;
    string fullbook;
    vector<string> bookarray;
    cin >> choice;

    if (choice == 'f') {
        printf("Terminating the program...");
    }
    else {
        if (choice == 'a') {
            cout << "please enter name of book: ";
            cin >> bookname;
            cout << "please enter author name :";
            cin >> authorname;
            fullbook = bookname + " " + authorname;
            bookarray.push_back(fullbook);
            cout << "Book has been added" << endl;
        }
    }
    return;
}