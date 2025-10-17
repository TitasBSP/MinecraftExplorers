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
        case 2:
            index = 6;
        case 3:
            index = 7;
        case 4:
            index = 8;
    };

    intVector pickedChests = {};

    for (int i = 0; i <= index*2; i++) {
        int chosenChest = (rand() % 12) + 1; 

        for (int i = 0; i <= sizeof(chests) / 4; i++) {
            if (chosenChest == chests[i]) {
                pickedChests.push_back(chosenChest);

                auto picker = std::find(chests.begin(), chests.end(), chosenChest);
                if (picker != chests.end()) {
                    chests.erase(picker);
                }
            } else {
                continue;
            };

        };
    };

    for (int chests : pickedChests) {
        cout << chests << endl;
    }

    return pickedChests;
};

int main() {

    assignChestValues();

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