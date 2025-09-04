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
//  FILE:        squirtle.h
//
//  DESCRIPTION:
//   This is the header file for the Squirtle child class.
//  
/****************************************************************/

#ifndef SQUIRTLE_H
#define SQUIRTLE_H

#include <string.h>
#include "pokemon.h"

class Squirtle : public Pokemon
{
    public:
        Squirtle();
        virtual ~Squirtle();
        void printData();
};

#endif

