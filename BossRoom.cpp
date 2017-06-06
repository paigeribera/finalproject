#include "BossRoom.hpp"

BossRoom::BossRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    name = "The Swordmaster's Hut";
    description = "I hope your wit is as sharp as your sword.";
}