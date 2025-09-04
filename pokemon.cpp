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
//  FILE:        pokemon.cpp
//
//  DESCRIPTION:
//   This is the C++ file for constructor and destructor of Pokemon
//   objects. That also prints whether the constructor or destructor
//   was called.
//  
/****************************************************************/

#include "pokemon.h"

using namespace std;

/******************************************************************/
//  Function name: Pokemon
//
//  DESCRIPTION:   The constructor of a Pokemon object and prints
//                 that the Pokemon Constructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Pokemon::Pokemon()
{
    cout << "Pokemon Constructor" << endl;
}

/******************************************************************/
//  Function name: ~Pokemon
//
//  DESCRIPTION:   The destructor of a Pokemon object and prints
//                 that the Pokemon Destructor was called.
//
//  Parameters:    N/A
//
//  Return values:  N/A
//  
/****************************************************************/
Pokemon::~Pokemon()
{
    cout << "Pokemon Destructor" << endl;
}
