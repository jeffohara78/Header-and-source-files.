#include "Header.h"

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


//Functions
//Introduce the game
void intro()
{
    cout << "Welcome to Jumanji\n\n";
    cout << "Follow the instructions to play the game\n" << endl;
}

//Get number of players
int howManyPlayers()
{
    int players;
    cout << "Enter a number of players ";
    cin >> players;
    return players;
}

//Get number of trapped
int howManyTrapped()
{
    int trapped;
    cout << "Enter a number smaller than your first entry ";
    cin >> trapped;
    return trapped;
}

//Calculate how many players successful
int howManySuccessful(int p_players, int p_trapped)
{
    int successful;
    successful = p_players - p_trapped;
    return successful;

}

//Get the leader's name
string leaderName()
{
    string leader;
    cout << "Enter your name: ";
    cin >> leader;
    return leader;
}

//Print game's storyline
void gameStoryLine(int p_players, int p_trapped, string p_leader, int p_successful)
{
    cout << "\nA new game has emerged for the world to play for " << p_players << " people.\n";
    cout << "The game is called Jumanji.\n";
    cout << "The goal of the game is to survive many harrowing feats.\n";
    cout << "Each player was under the guidance of a hardened player, " << p_leader << ".\n";
    cout << "After feat after feat, many players were lost, " << p_trapped << ".\n";
    cout << "In the end there were only a few succussful players remaining, " << p_successful << "." << endl;
}