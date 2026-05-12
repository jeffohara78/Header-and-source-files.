#pragma once

#include <string>

using std::string;

//Functions and definitions
void intro();
int howManyPlayers();
int howManyTrapped();
int howManySuccessful(int p_players, int p_trapped);
string leaderName();
void gameStoryLine(int p_players, int p_trapped, string p_leader, int p_successful);




