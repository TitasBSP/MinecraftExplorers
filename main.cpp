#include <iostream>
#include <cstdlib>
#include <map>

#include <ctype.h>
#include "values.h"

/*
Cards based off the statistics in this PDF!
https://boardgamegeek.com/filepage/297439/minecraft-explorers-full-card-list
*/ 

using std::cout;
using std::cin;
using std::endl;
using std::string;

int generateCards() {

    return 0;
}

void assignChestValues() {
    int chests[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int index = 5;

    string difficulty;

    cout << "What difficulty would you like to have? \n[EASY] - [MEDIUM] - [HARD] - [HARDCORE] " << endl;
    cin >> difficulty;

    if (difficulty == "medium") {
        index = 6;
    } else if (difficulty == "hard") {
        index = 7;
    } else if (difficulty == "hardcore") {
        index = 8;
    }

    for (int i = 0; i <= index; i++)
    int pickedChests[index] = {};
};

int main() {

    // cout << itemValues["Map"] << endl;
    return 0;
}

/*
List of everything i have to do

- Random chest generation -> Function
- Clone multiple of the biome card, 60 in total -> Function
- Link all items to the list of biome cards -> .h file
- Make it so that each card also has a deadliness rate that can have mobs
- Make weapons usable twice
- Random biome generation -> Function
- Random mob generation, add game over in any of the last 5 -> Function
- List everything you can do -> In main loop
- Manage hunger system -> Function
- Night system, after player chooses to do no more moves, mob is added unless a chestplate is detected -> In main loop
- Game over screen, and warning screen in the last 6 cards.
- Resetting everything to its original state.


*/