#include "ShipRoom.hpp"

ShipRoom::ShipRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    name = "Boaty McBoatface";
    description = "It's an old ship that looks like a hangout for drunks. And rats.";
}