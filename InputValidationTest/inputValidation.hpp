/*******************************************************************************************
 **  Author:         Michael Estorer
 **  Date:           25 Jan 2017
 **  Description:    CS162 Project 2 inputValidation functions header file.
 **                  The input validation functions validate that user entries in the
 **                  console are valid before passing them back to the calling funtion.
 **
 **                  inputValidation.hpp
 ******************************************************************************************/

#ifndef inputValidation_hpp
#define inputValidation_hpp

#include <string>
#include <iostream>

// Returns a valid integer
int getAnInt();

// Returns true if input is an integer, false if anything else
bool isInputAnInt(std::string input);

// Returns a valid integer within the range specified by parameters min and max
int getAnInt(int min, int max);

// Returns a valid double
double getADouble();

// Returns true if input is a double, false if anything else
bool isInputADouble(std::string input);

// Returns a valid double within the range specified by parameters min and max
double getADouble(double min, double max);

// Returns a valid string with the first letter of the first word capitalized
std::string getAString();

#endif /* inputValidation_hpp */
