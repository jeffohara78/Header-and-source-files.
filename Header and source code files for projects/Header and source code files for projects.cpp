// Header and source code files for projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Jeff O'Hara
A program that uses header and source code files outside of the main function file
8-3-21
*/

#include <iostream>
#include <string>
#include "Header.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

//Initalize main function
int main()
{
    int players, trapped, successful;
    string leader;
    intro();
    players = howManyPlayers();
    trapped = howManyTrapped();
    successful = howManySuccessful(players, trapped);
    leader = leaderName();
    gameStoryLine(players, trapped, leader, successful);

    return 0;
}

