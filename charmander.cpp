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
//  FILE:        charmander.cpp
//
//  DESCRIPTION:
//   This is the C++ file of the child class Charmander which 
//   defines the constrcutor, destructor, and printData().
//  
/****************************************************************/

#include "pokemon.h"
#include "charmander.h"
#include <iostream>

/******************************************************************/
//  Function name: Charmander
//
//  DESCRIPTION:   The constructor of a Charmander object and prints
//                 that the Charmander Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Charmander::Charmander()
{
    type = "fire";
    weight = 9.5;
    std::cout << "Charmander Constructor" << std::endl;
}

/******************************************************************/
//  Function name: ~Charmander
//
//  DESCRIPTION:   The destructor of a Charmander object and prints
//                 that the Charmander Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Charmander::~Charmander()
{
    std::cout << "Charmander Destructor" << std::endl;
}

/******************************************************************/
//  Function name: printData
//
//  DESCRIPTION:   This function prints out the name, type, and 
//                 weight of a Charmander.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
void Charmander::printData()
{
    std::cout << "Name: Charmander" << "\nType: " << type << "\nWeight: " << weight << std::endl;
}
