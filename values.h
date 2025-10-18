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

class mobCard {
    public:
        int priceHunger;
        int currency;
        bool killed;
};

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

class biome {
    public:
        int priceHunger;
        bool meetsBonusReqs;
        int item;
        bool turnedOver;
        bool mobDanger;
        bool hasPick;
        bool hasSword;

        biome(int p, bool mbr, int i, bool t, bool m, bool hP, bool hS) : 
            priceHunger(p), meetsBonusReqs(mbr), item(i), turnedOver(t), mobDanger(m), hasPick(hP), hasSword(hS) {};
};

typedef std::vector<biome> array;


biome vilLibrarian;
biome vilCleric;
biome vilFletcher;
biome vilArmorsmith;
biome vilToolsmith;
biome vilWeaponsmith;
biome vilCartographer;
biome vilFarmer;

biome woods1, woods2, woods3, woods4;

biome cherryBlossom1, cherryBlossom2, cherryBlossom3;

biome lushCave1, lushCave2, lushCave3, lushCave4;

biome geode1, geode2, geode3;

biome taiga1, taiga2, taiga3, taiga4;

biome shipwreck1, shipwreck2, shipwreck3, shipwreck4;

biome jungle1, jungle2, jungle3;

biome desertTemple1, desertTemple2, desertTemple3, desertTemple4;

biome illagerOutpost1, illagerOutpost2, illagerOutPost3;

biome mineshaft1, mineshaft2, mineshaft3, mineshaft4;

biome witchHut1, witchHut2, witchHut3, witchHut4;

biome chasm1, chasm2, chasm3;

biome ruinedPortal1, ruinedPortal2;

biome deepCave1, deepCave2, deepCave3, deepCave4;

biome woodlandMansion;
biome oceanMonument;

int main() {
    inline biome vilLibrarian{1, false, itemValues["Bookshelf"] , false, false, false, false};
    inline biome vilCleric{1, false, itemValues["Glowstone"] , false, false, false, false};
    inline biome vilFletcher{1, false, itemValues["Crossbow"], false, false, false, false};
    inline biome vilArmorsmith{1, false, itemValues["Iron Armor"], false, false, false, false};
    inline biome vilLibrarian{1, false, itemValues["Bookshelf"] , false, false, false, false};
    inline biome vilCleric{1, false, itemValues["Glowstone"] , false, false, false, false};
    inline biome vilFletcher{1, false, itemValues["Crossbow"], false, false, false, false};
    inline biome vilArmorsmith{1, false, itemValues["Iron Armor"], false, false, false, false};

    inline biome woods1{2, false, itemValues["Wood"], false, false, false, false};
    inline biome woods2{2, false, itemValues["Wood"], false, false, false, false};
    inline biome woods3{2, false, itemValues["Potted Flower"], false, false, false, false};
    inline biome woods4{2, false, itemValues["Apple"], false, false, false, false};

    inline biome cherryBlossom1{2, false, itemValues["Wood"], false, false, false, false};
    inline biome cherryBlossom2{2, false, itemValues["Spyglass"], false, false, false, false};
    inline biome cherryBlossom3{2, false, itemValues["Iron Pickaxe"], false, false, false, false};

    inline biome lushCave1{2, false, itemValues["Spyglass"], false, false, false, false};
    inline biome lushCave2{2, false, itemValues["Glowberry"], false, false, false, false};
    inline biome lushCave3{2, false, itemValues["Iron Ingot"], false, true, false, false};
    inline biome lushCave4{2, false, itemValues["Iron Armor"], false, false, false, false};

    inline biome geode1{2, false, itemValues["Iron Sword"], false, false, false, false};
    inline biome geode2{2, false, itemValues["Pickaxe"], false, false, false, false};
    inline biome geode3{2, false, itemValues["Spyglass"], false, false, false, false};

    inline biome taiga1{3, false, itemValues["Wildberry"], false, false, false, false};
    inline biome taiga2{3, false, itemValues["Iron Armor"], false, false, false, false};
    inline biome taiga3{3, false, itemValues["Jack O'Lantern"], false, false, false, false};
    inline biome taiga4{3, false, itemValues["Wood"], false, false, false, false};

    inline biome shipwreck1{3, false, itemValues["Map"], false, false, false, false};
    inline biome shipwreck2{3, false, itemValues["Carrot"], false, false, false, false};
    inline biome shipwreck3{3, false, itemValues["Sea Lantern"], false, false, false, false};
    inline biome shipwreck4{3, false, itemValues["Iron Armor"], false, false, false, false};

    inline biome jungle1{3, false, itemValues["Crossbow"], false, false, false, false};
    inline biome jungle1{3, false, itemValues["Melon"], false, false, false, false};
    inline biome jungle1{3, false, itemValues["Wood"], false, false, false, false};

    inline biome desertTemple1{3, false, itemValues["Spyglass"], false, false, false, false};
    inline biome desertTemple2{3, false, itemValues["Clay Pot"], false, false, false, false};
    inline biome desertTemple3{3, false, itemValues["Emerald"], false, true, false, false};
    inline biome desertTemple4{3, false, itemValues["Gold Sword"], false, true, false, false};

    inline biome illagerOutpost1{3, false, itemValues["Illager Banner"], false, false, false, false};
    inline biome illagerOutpost2{3, false, itemValues["Crossbow"], false, true, false, false};
    inline biome illagerOutpost3{3, false, itemValues["Diamond Pickaxe"], false, true, false, false};

    inline biome mineshaft1{3, false, itemValues["Torch"], false, false, false, false};
    inline biome mineshaft2{3, false, itemValues["Iron Ingot"], false, false, false, false};
    inline biome mineshaft3{3, false, itemValues["Emerald"], false, true, false, false};
    inline biome mineshaft4{3, false, itemValues["Iron Ingot"], false, true, false, false};

    inline biome witchHut1{3, false, itemValues["Crossbow"], false, false, false, false};
    inline biome witchHut2{3, false, itemValues["Gold Pickaxe"], false, false, false, false};
    inline biome witchHut3{3, false, itemValues["Cauldron"], false, true, false, false};
    inline biome witchHut4{3, false, itemValues["Froglight"], false, true, false, false};

    inline biome chasm1{4, false, itemValues["Iron Armor"], false, false, false, false};
    inline biome chasm2{4, false, itemValues["Iron Ingot"], false, false, false, false};
    inline biome chasm3{4, false, itemValues["Emerald"], false, false, false, false};

    inline biome ruinedPortal1{4, false, itemValues["Gold Apple"], false, false, false, false};
    inline biome ruinedPortal2{4, false, itemValues["Gold Sword"], false, false, false, false};

    inline biome deepCave1{4, false, itemValues["Emerald"], false, false, false, false};
    inline biome deepCave2{4, false, itemValues["Iron Ingot"], false, true, false, false};
    inline biome deepCave3{4, false, itemValues["Emerald"], false, true, false, false};
    inline biome deepCave4{4, false, itemValues["Diamond Sword"], false, true, false, false};

    inline biome woodlandMansion{7, false, itemValues["Totem of Undying"], false, true, false, false};
    inline biome oceanMonument{7, false, itemValues["Emerald"], false, true, false, false};




    return 0;
}

array biomeArr = {vilLibrarian, vilCleric, vilFletcher, vilArmorsmith, vilToolsmith, vilWeaponsmith, vilCartographer, vilFarmer, 
    woods1, woods2, woods3, woods4, 
    cherryBlossom1, cherryBlossom2, cherryBlossom3, 
    lushCave1, lushCave2, lushCave3, lushCave4, 
    geode1, geode2, geode3, 
    taiga1, taiga2, taiga3, taiga4,
    shipwreck1, shipwreck2, shipwreck3, shipwreck4,
    jungle1, jungle2, jungle3,
    desertTemple1, desertTemple2, desertTemple3, desertTemple4, 
    illagerOutpost1, illagerOutpost2, illagerOutPost3,
    mineshaft1, mineshaft2, mineshaft3, mineshaft4,
    witchHut1, witchHut2, witchHut3, witchHut4,
    chasm1, chasm2, chasm3,
    ruinedPortal1, ruinedPortal2,
    deepCave1, deepCave2, deepCave3, deepCave4,
    woodlandMansion, oceanMonument
};

// Every landscape has what?
// Hunger price, item, 


// Every mob card has what?
// Hunger price, currency as hunger, if a duplicate then you take another card

// How do we port that to cpp:
// Every card is unturned / unkilled
// Shuffle the mapped landscape cards, shuffle the mob cards with a gameover inserted into one of the 5 last values.

