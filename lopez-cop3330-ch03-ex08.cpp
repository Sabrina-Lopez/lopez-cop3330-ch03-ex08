/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>
using namespace std;

int main() {
    int userNum; //declare userNum, an integer variable to hold the user's inputted numerical value

    //tell the user to input a value to determine if it is odd or even
    cout << "Please input a number. \n";

    //take the user's inputted value
    cin >> userNum;

    if(abs(userNum) % 2 == 0) { //if the user's inputted value is divisible by 2, then it is even
        cout << "The value " << userNum << " is an even number.\n"; //output to the user that their value is even
    }
    else { //if not, then it is odd
        cout << "The value " << userNum << " is an odd number.\n"; //output to the user that their value is odd
    }

    return 0;
}