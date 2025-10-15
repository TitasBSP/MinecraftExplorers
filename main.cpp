#include <iostream>
#include <cstdlib>
#include <map>

/*
Cards based off the statistics in this PDF!
https://boardgamegeek.com/filepage/297439/minecraft-explorers-full-card-list
*/ 

using std::cout;
using std::cin;
using std::endl;
using std::string;

typedef std::map<string, int> mapped;

mapped itemValues = {
    {"Bookshelf", 1}, {"Glowstone", 2}, {"Crossbow", 3},
    {"Iron Armor", 4}, {"Diamond Pickaxe", 5}, {"Diamond Sword", 6},
    {"Map", 7}, {"Bread", 8}, {"Wood", 9},
    {"Potted Flower", 10}, {"Apple", 11}, {"Spyglass", 12},
    {"Iron Pickaxe", 13}, {"Glowberry", 14}, {"Iron Ingot", 15},
    {"Iron Sword", 16}, {"Wildberry", 17}, {"Jack O'Lantern", 18},
    {"Carrot", 19}, {"Sea Lantern", 20}, {"Melon", 21},
    {"Clay Pot", 22}, {"Emerald", 23}, {"Gold Sword", 24},
    {"Illager Banner", 25}, {"Torch", 26}, {"Gold Pickaxe", 27},
    {"Cauldron", 28}, {"Froglight", 29}, {"Gold Apple", 30},
    {"Totem of Undying", 31}, {"Wet Sponge", 32}
};

int furnishing[5] = {itemValues["Bookshelf"], itemValues["Potted Flower"], itemValues["Clay Pot"], itemValues["Cauldron"], itemValues["Illager Banner"]};

int lighting[5] = {itemValues["Glowstone"], itemValues["Jack O'Lantern"], itemValues["Sea Lantern"], itemValues["Torch"], itemValues["Froglight"]};

int weaponry[8] = {itemValues["Crossbow"], itemValues["Iron Armor"], itemValues["Diamond Pickaxe"], itemValues["Diamond Sword"], itemValues["Iron Pickaxe"],
itemValues["Iron Sword"], itemValues["Gold Sword"], itemValues["Gold Pickaxe"]};

int food[7] = {itemValues["Bread"], itemValues["Apple"], itemValues["Glowberry"], itemValues["Wildberry"], itemValues["Carrot"], itemValues["Melon"],
itemValues["Gold Apple"]};

int materials[3] = {itemValues["Wood"], itemValues["Iron Ingot"], itemValues["Emerald"]};

int specials[4] = {itemValues["Map"], itemValues["Spyglass"], itemValues["Totem of Undying"], itemValues["Wet Sponge"]};

int baseHunger = 6;


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

class chest {
    public:
        int requirement;
};

int generateCards() {

    return 0;
}

int main() {

    // cout << itemValues["Map"] << endl;
    return 0;
}