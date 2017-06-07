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
    description = "'The Town Square of Scabb Island.'";
}

int StartingRoom::interact() {
    cout << "You stand in the town square of Scabb Island." << endl;
    cout << "You reminisce on the conversation you had previously with the Pirate Leaders." << endl;
    cout << "To become a great pirate, you must first complete the 3 Trials." << endl;
    cout << "The first trial is to defeat the Sword Master of Scabb Island." << endl;
    cout << "You've stolen your sword, and you have a puke-covered journal one of the leaders gave you." << endl;
    cout << "He gave it to you saying something about sharpening your wit by collecting insults." << endl;
    cout << "Without the proper insults, you won't be able to defeat the Sword Master." << endl;
    return -1;
}