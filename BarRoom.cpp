#include "BarRoom.hpp"

/*  name: bar room constructor
    desc: makes bar room object
    pre-conditions: game object exists
    post-conditions: new bar room created */
BarRoom::BarRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    insult = false;
    name = "Bloody Lip Bar and Grille";
    description = "'Your local grog supplier.'";
}
