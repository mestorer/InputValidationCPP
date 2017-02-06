/*******************************************************************************************
 **  Author:         Michael Estorer
 **  Date:           25 Jan 2017
 **  Description:    CS162 Project 2 inputValidation functions implementation file.
 **                  The input validation functions validate that user entries in the
 **                  console are valid before passing them back to the calling funtion.
 **
 **                  inputValidation.cpp
 ******************************************************************************************/

#include "inputValidation.hpp"

// Returns a vaild integer
int getAnInt() {
    std::string input;
    std::cin >> input;
    
    while (isInputAnInt(input) == false) {
        std::cout << "Invalid input, please try again: ";
        std::cin >> input;
    }
    std::cin.clear();

    return std::stoi(input);
}

// Returns true if input is an integer, false if anything else
bool isInputAnInt(std::string input) {
    
    bool valid = true;
    
    // Checks to see if there's at least one digit
    int numberOfDigits = 0;
    
    for (unsigned index=0; index < input.length(); index++) {
        if (isdigit(input[index]) == true) {
            numberOfDigits += 1;
        }
    }
    
    // Checks to see if there's at a minus sign
    int numberOfDashes = 0;
    
    for (unsigned index=0; index < input.length(); index++) {
        if ((input[index] == '-') == true) {
            numberOfDashes += 1;
        }
    }
    std::cin.clear();
    
    if ((numberOfDigits >= 1 && (numberOfDashes <=1)) == false) {
        valid = false;
    }
    
    for (unsigned i = 0; i < input.length(); i++) {
        if ((input[i] == '-' || (isdigit(input[i]) == true)) == false) {
            valid = false;
        }
    }
    
    return valid;
}

// Returns a vaild integer within the range specified by parameters min and max
int getAnInt(int min, int max) {
    int input;
    do {
        input = getAnInt();
        if (input < min|| input > max) {
            std::cout << "Invalid input, please try again: ";
        }
    } while (input < min|| input > max);
    
    std::cin.clear();
    
    return input;
}

// Returns a valid double
double getADouble() {
    std::string input;
    std::cin >> input;
    
    while (isInputADouble(input) == false) {
        std::cout << "Invalid input, please try again: ";
        std::cin >> input;
    }
    std::cin.clear();

    return std::stod(input);
}

// Returns true if input is a double, false if anything else
bool isInputADouble(std::string input) {
    
    bool valid = true;
    
    // Checks to see if there's more than one period
    int numberOfPeriods = 0;
    
    for (unsigned index=0; index < input.length(); index++) {
        if ((input[index] == '.') == true) {
            numberOfPeriods += 1;
        }
    }
    
    // Checks to see if there's at least one digit
    int numberOfDigits = 0;
    
    for (unsigned index=0; index < input.length(); index++) {
        if (isdigit(input[index]) == true) {
            numberOfDigits += 1;
        }
    }
    
    // Checks to see if there's at a minus sign
    int numberOfDashes = 0;
    
    for (unsigned index=0; index < input.length(); index++) {
        if ((input[index] == '-') == true) {
            numberOfDashes += 1;
        }
    }

    
    // If the input string has at least one digit and one or no periods, then the
    // input is a valid double.
    if (((numberOfPeriods <= 1 && numberOfDigits >= 1) && (numberOfDashes <=1)) == false) {
        valid = false;
    }
    
    for (unsigned i = 0; i < input.length(); i++) {
        if ((input[i] == '.' || input[i] == '-' || (isdigit(input[i]) == true)) == false) {
            valid = false;
        }
    }
    
    return valid;
}

// Returns a valid double within the range specified by parameters min and max
double getADouble(double min, double max) {
    double input;
    do {
        input = getADouble();
        if (input < min|| input > max) {
            std::cout << "Invalid input, please try again: ";
        }
    } while (input < min|| input > max);
    std::cin.clear();
    
    return input;
}

// Returns a valid string of length 1 or more.
std::string getAString() {
    std::string stringIn;
    std::getline(std::cin, stringIn);
    std::cin.clear();
    
    if (stringIn.length() >= 1) {
        return stringIn;
    } else {
        return " ";
    }
}
