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
//  FILE:        pokemon.h
//
//  DESCRIPTION:
//   This is the header file for the Pokemon parent class.
//  
/****************************************************************/

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <iostream>

class Pokemon {
    protected:
        std::string type;
        float weight;
        
    public:
        Pokemon();
        virtual ~Pokemon();
        virtual void printData() = 0;
};

#endif
