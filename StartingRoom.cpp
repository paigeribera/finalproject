#include "StartingRoom.hpp"

StartingRoom::StartingRoom(string title) {
    name = title;
    description = "The Town Square of Scabb Island.";
}

StartingRoom::StartingRoom() {
    Room* forward = NULL;
    Room* left = NULL;
    Room* right = NULL;
    Room* back = NULL;
    
    name = "Town Square";
    description = "The Town Square of Scabb Island.";
}