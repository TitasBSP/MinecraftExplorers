#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <algorithm>

#include <ctype.h>
#include "values.h"

typedef std::vector<int> intVector;

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

intVector assignChestValues() {
    intVector chests = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int index = 5;

    int difficulty;

    cout << "What difficulty would you like to have? \n[1: EASY] - [2: MEDIUM] - [3: HARD] - [4: HARDCORE] " << endl;
    cin >> difficulty;

    switch (difficulty) {
        case 2: index = 6; break;
        case 3: index = 7; break;
        case 4: index = 8; break;
        default: index = 5; break;
    };

    intVector pickedChests = {};
    system("clear");

    for (int i = 0; i < index; i++) {
        int randIndex = rand() % chests.size(); 
        int chosenChest = chests[randIndex];

        pickedChests.push_back(chosenChest);
        chests.erase(chests.begin() + randIndex);
    };

    for (int chesters : pickedChests) {
        cout << chesters << endl;
    }

    cout << "Debug index amount: " << index << endl;

    return pickedChests;
};

/* 
Requirements: 
(1) = 2 wood
(2) = 2 Iron Ingots
(3) = Lighting + Furnishing
(4) = Pickaxe + Emerald
(5) = Wet Sponge
(6) = Totem of Undying 
(7) = 2 Lighting
(8) = 2 Furnishing
(9) = Wood + Iron Ingot
(10) = 2 Food
(11) = Crossbow + Food
(12) = Sword + Iron Armor
*/

int main() {

    srand(time(NULL));
    assignChestValues();

    return 0;
}

/*
List of everything i have to do

- Random chest generation -> Function ((- DONE -))
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