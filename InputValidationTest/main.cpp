//
//  main.cpp
//  InputValidationTest
//
//  Created by Michael on 2/1/17.
//  Copyright © 2017 Michael Estorer. All rights reserved.
//

#include <iostream>
#include "inputValidation.hpp"

int main() {
    std::cout << "int: ";
    int integer;
    integer = getAnInt();
    std::cout << integer << std::endl;
    
    std::cout << "dbl: ";
    double dbl;
    dbl = getADouble();
    std::cout << dbl << std::endl;
    
    return 0;
}
