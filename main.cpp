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
//  FILE:        main.cpp
//
//  DESCRIPTION:
//   This C++ file has the main function that creates Pokemon 
//   objects and stores them in a map using nicknames from a 
//   vector as keys. It then uses the helper function, 
//   checkPokedex to print data about the Pokemon. Then cleans 
//   the heap memory.
//  
/****************************************************************/

#include <vector>
#include <map>
#include <string>
#include "charmander.h"
#include "pikachu.h"
#include "squirtle.h"

// function prototype
void checkPokedex(Pokemon*);

/******************************************************************/
//  Function name: main
//
//  DESCRIPTION:   This function creates a vector of nicknames and
//                 uses them as keys for a map of Pokemon objects.
//                 Then prints their data using the helper function
//                 checkPokedex().
//
//  Parameters:    N/A
//
//  Return values:  0 : The function ended
//  
/****************************************************************/
int main()
{
    // creates vector of nicknames
    std::vector<std::string> nicknames;
    nicknames.push_back("Mr. Zap Zap");
    nicknames.push_back("Pyro");
    nicknames.push_back("Bubbles");

    // creates map of Pokemon 
    std::map<std::string, Pokemon*> pokeDex;
    std::cout << "Creating Pokemon to add to pokeDex: " << std::endl;
    pokeDex["Mr. Zap Zap"] = new Pikachu();
    pokeDex["Pyro"] = new Charmander();
    pokeDex["Bubbles"] = new Squirtle();
 
    // prints data and how each Pokemon is accessed from the map 
    for (std::vector<std::string>::iterator it = nicknames.begin(); it != nicknames.end(); ++it)
    {
        std::string nickname = *it;
        std::cout << "\nUsing key nickname: " << nickname << std::endl;
        Pokemon* p = pokeDex[*it];
        std::cout << "In order to access: " << std::endl;
        checkPokedex(p);
    } 

    // cleans up the heap memory
    std::cout << "\nCleaning up heap memory by deleting Pokemon" << std::endl;
    for (std::vector<std::string>::iterator it = nicknames.begin(); it != nicknames.end(); ++it)
    {
        delete pokeDex[*it];
    }

    return 0;
}

/******************************************************************/
//  Function name: checkPokedex
//
//  DESCRIPTION:   This function prints the data about the given
//                 Pokemon object by calling it's printData() function.
//
//  Parameters:    pokemon (Pokemon *) : Pokemon pointer that points
//                                       to a Pokemon object.
//
//  Return values:  N/A
//  
/****************************************************************/
void checkPokedex(Pokemon *pokemon)
{
    pokemon->printData();
}
