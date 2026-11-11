// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 26th Oct,2026
// This program asks the
// user for a factorial number as an integer
// and calculates the factorial of that number.in a true while loop and
// catches errors that are not integers and displays
// an error message to the user.

#include <iostream>

int main() {
    // declare variables
    int userInput;
    int factorial = 1;
    int counter = 0;

    // get user input
    std::cout << "Enter a positive number: ";
    std::cin >> userInput;

    // catch errors that may occur during user input
    try {
        if (userInput != static_cast<int>(userInput)
        || userInput == static_cast<float>(userInput)) {
            throw std::invalid_argument
            ("Invalid input. Please enter a valid integer.");
        }
        // check if user input is a positive number integer
        if (userInput < 0) {
            throw std::invalid_argument
            ("Invalid input. Please enter a positive number.");
        } else {
            // calculate the factorial of the user input
            for (int i = 1; i <= userInput; i++) {
                factorial *= i;
            }
            // display the result
            std::cout << "The factorial of " << userInput
                      << " is: " << factorial << std::endl;
        }
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}
