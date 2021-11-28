

#include <iostream>

int main() {
    int userNum;

    //tell the user to input a value to determine if it is odd or even
    std::cout << "Please input a number.";
    std::cin >> userNum;
    std::cout << "Your number is: " << userNum;

    if(abs(userNum) % 2 == 0) {
        std::cout << "The value" << userNum << "is an even number.";
    }
    else {
        std::cout << "The value" << userNum << "is an odd number.";
    }

    return 0;
}