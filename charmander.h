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
//  FILE:        charmander.h
//
//  DESCRIPTION:
//   This is the header file for the Charmander child class.
//  
/****************************************************************/

#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <string.h>
#include "pokemon.h"

class Charmander : public Pokemon
{
    public:
        Charmander();
        virtual ~Charmander();
        void printData();
};

#endif
