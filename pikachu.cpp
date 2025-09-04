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
//  FILE:        pikachu.cpp
//
//  DESCRIPTION:
//   This is the C++ file for the constructor and destructor of 
//   Pikachu object. That also prints whether the constructor or 
//   destructor was called.
//  
/****************************************************************/

#include "pokemon.h"
#include "pikachu.h"
#include <iostream>

/******************************************************************/
//  Function name: Pikachu
//
//  DESCRIPTION:   The constructor of a Pikachu object and prints
//                 that the Pikachu Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Pikachu::Pikachu()
{
    type = "electric";
    weight = 7.8;
    std::cout << "Pikachu Constructor" << std::endl;
}

/******************************************************************/
//  Function name: ~Pikachu
//
//  DESCRIPTION:   The destructor of a Pikachu object and prints
//                 that the Pikachu Destructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Pikachu::~Pikachu()
{
    std::cout << "Pikachu Destructor" << std::endl;
}

/******************************************************************/
//  Function name: printData
//
//  DESCRIPTION:   This function prints out the name, type, and 
//                 weight of a Pikachu.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
void Pikachu::printData()
{
    std::cout << "Name: Pikachu" << "\nType: " << type << "\nWeight: " << weight << std::endl;
}

