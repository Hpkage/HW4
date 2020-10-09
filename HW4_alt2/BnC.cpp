// BnC.cpp Hiromi Kageyama Oct. 9, 2020
// Write a c++ program that has you guess a four digit code
// from 1000 to 9999

#include <iostream>
#include <string>
#include <stdlib.h> 
#include <time.h>

using namespace std;

string generate_secret_number() {
    // Generates a 4-digit secret number (between 1000 and 9999)
    srand(time(0));
    int secret_number = rand() % 9000 + 1000;
    return to_string(secret_number);
}