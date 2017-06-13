#include "ShipRoom.hpp"

/*  name: ship room constructor
    desc: makes ship room object
    pre-conditions: game object exists
    post-conditions: new ship room created */
ShipRoom::ShipRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    insult = false;
    
    name = "Boaty McBoatface";
    description = "'It's an old ship that looks like a hangout for drunks. And rats.'";
}