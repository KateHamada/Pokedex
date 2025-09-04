/******************************************************************/
//  NAME:        Kate Hamada
//
//  HOMEWORK:    9
//
//  CLASS:       ICS 212
//
//  INSTRUCTOR:  Ravi Narayan
//
//  DATE:        April 29, 2025
//
//  FILE:        squirtle.cpp
//
//  DESCRIPTION:
//   This is the C++ file for constructor and destructor of Squirtle
//   objects. That also prints whether the constructor or destructor
//   was called.
//  
/****************************************************************/

#include "pokemon.h"
#include "squirtle.h"
#include <iostream>

/******************************************************************/
//  Function name: Squirtle
//
//  DESCRIPTION:   The constructor of a Squirtle object and prints
//                 that the Squirtle Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Squirtle::Squirtle()
{
    type = "water";
    weight = 5.5;
    std::cout << "Squirtle Constructor" << std::endl;
}

/******************************************************************/
//  Function name: ~Squirtle
//
//  DESCRIPTION:   The destructor of a Squirtle object and prints
//                 that the Squirtle Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Squirtle::~Squirtle()
{
    std::cout << "Squirtle Destructor" << std::endl;
}

/******************************************************************/
//  Function name: printData
//
//  DESCRIPTION:   This function prints out the name, type, and
//                 weight of a Squirtle.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
void Squirtle::printData()
{
    std::cout << "Name: Squirtle" << "\nType: " << type << "\nWeight: " << weight << std::endl;
}

