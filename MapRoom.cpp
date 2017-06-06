#include "MapRoom.hpp"

MapRoom::MapRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    name = "Cartographer's Shack";
    description = "I'm the map, I'm the map...";
}