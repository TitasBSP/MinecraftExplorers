#include <iostream>
#include <vector>
#include <map>

using std::string;

typedef std::map<string, int> mapped;
typedef std::map<string, float> fixed;

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

mapped mobValueToKill = {
    {"Zombie", 2}, {"Skeleton", 2}, {"Spider", 2}, 
    {"Creeper", 3}, {"Witch", 3}, 
    {"Enderman", 4}
};

fixed mobCurrency = {
    {"Zombie", 0.5}, {"Skeleton", 0.5}, {"Spider", 0.5}, 
    {"Creeper", 0.5}, {"Witch", 0.5}, 
    {"Enderman", 0.5}
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

class biome {
    public:
        int priceHunger;
        int item;
        bool turnedOver;
};

class mobCard {
    public:
        int priceHunger;
        int currency;
        bool killed;
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

class chest {
    public:
        bool completed;
        chest() {
            completed = false;
        }
};

chest one;
chest two;
chest three;
chest four;
chest five;
chest six;
chest seven;
chest eight;
chest nine;
chest ten;
chest eleven;
chest twelve; 

typedef std::vector<biome> array;


biome vilLibrarian;
biome vilCleric;
biome vilFletcher;
biome vilArmorsmith;
biome vilToolsmith;
biome vilWeaponsmith;
biome vilCartographer;
biome vilFarmer;
biome woods;
biome cherryBlossom;
biome lushCave;
biome geode;
biome taiga;
biome shipwreck;
biome jungle;
biome desertTemple;
biome illagerOutpost;
biome mineshaft;
biome witchHut;
biome chasm;
biome ruinedPortal;
biome deepCave;
biome woodlandMansion;
biome oceanMonument;



array biomeArr = {vilLibrarian, vilCleric, vilFletcher, vilArmorsmith, vilToolsmith, vilWeaponsmith, vilCartographer, vilFarmer, woods, 
    cherryBlossom, lushCave, geode, taiga, shipwreck, jungle, desertTemple, illagerOutpost, mineshaft, witchHut, chasm, ruinedPortal, deepCave, woodlandMansion, oceanMonument};

// Every landscape has what?
// Hunger price, item, 


// Every mob card has what?
// Hunger price, currency as hunger, if a duplicate then you take another card

// How do we port that to cpp:
// Every card is unturned / unkilled
// Shuffle the mapped landscape cards, shuffle the mob cards with a gameover inserted into one of the 5 last values.

