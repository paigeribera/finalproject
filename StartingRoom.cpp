#include "StartingRoom.hpp"

/*  name: StartingRoom constructor
    desc: creates starting room w/ direction set to null
    pre-conditions: game object exists
    post-conditions: creates starting room w/ direction set to null */
StartingRoom::StartingRoom() {
    Room* forward = NULL;
    Room* left = NULL;
    Room* right = NULL;
    Room* back = NULL;
    
    name = "Town Square";
    description = "'The Town Square of Scabb Island.'";
}
