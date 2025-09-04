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
//  FILE:        pikachu.h
//
//  DESCRIPTION:
//   This is the header file for the Pikachu child class.
//  
/****************************************************************/

#ifndef PIKACHU_H
#define PIKACHU_H

#include <string.h>
#include "pokemon.h"

class Pikachu : public Pokemon
{
    public:
        Pikachu();
        virtual ~Pikachu();
        void printData();
};

#endif

