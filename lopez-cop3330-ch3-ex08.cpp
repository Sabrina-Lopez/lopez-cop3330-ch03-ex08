/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Sabrina Lopez
 */

#include <iostream>

int main() {
    int userNum; //declare userNum, an integer variable to hold the user's inputted numerical value

    //tell the user to input a value to determine if it is odd or even
    std::cout << "Please input a number.";

    //take the user's inputted value
    std::cin >> userNum;

    if(abs(userNum) % 2 == 0) { //if the user's inputted value is divisible by 2, then it is even
        std::cout << "The value" << userNum << "is an even number."; //output to the user that their value is even
    }
    else { //if not, then it is odd
        std::cout << "The value" << userNum << "is an odd number."; //output to the user that their value is odd
    }

    return 0;
}