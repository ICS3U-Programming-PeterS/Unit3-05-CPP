// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// This program asks the user for a number (1-12) and
// associates the number with the corresponding month
#include <iostream>


int main() {
    // declare variables
    int userMonth;

    // get month user input
    std::cout << "Enter a number for a month (1-12): ";
    std::cin >> userMonth;

    switch (userMonth) {
        case 1:
            std::cout << "1 is January" << std::endl;
            break;
        case 2:
            std::cout << "2 is February" << std::endl;
            break;
        case 3:
            std::cout << "3 is March" << std::endl;
            break;
        case 4:
            std::cout << "4 is April" << std::endl;
            break;
        case 5:
            std::cout << "5 is May" << std::endl;
            break;
        case 6:
            std::cout << "6 is June" << std::endl;
            break;
        case 7:
            std::cout << "7 is July" << std::endl;
            break;
        case 8:
            std::cout << "8 is August" << std::endl;
            break;
        case 9:
            std::cout << "9 is September" << std::endl;
            break;
        case 10:
            std::cout << "10 is October" << std::endl;
            break;
        case 11:
            std::cout << "11 is November" << std::endl;
            break;
        case 12:
            std::cout << "12 is December" << std::endl;
            break;
        default:
            std::cout << userMonth << " doesn't correspond to any month"
            << std::endl;
    }
}
