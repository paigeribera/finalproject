#include "Pirate.hpp"

Pirate::Pirate(Room *startingLocation) {
    location = startingLocation;
    name = "Guybrush Threepwood";
    description = "A mighty pirate-in-training who can hold his breath for 10 minutes.";
    health = 100;
    journal = new Journal();
}

// Room.getName result is passed to this function so guybrush location can be updated
void Pirate::updateLocation(Room* room) {
    location = room;
}

// do i need to be returning a pointer to the location for any reason..? is a string sufficient?
Room* Pirate::getLocation() {
    return location;
}

int Pirate::getHealth() {
    return health;
}

// if guybrush uses WRONG insult, call updateHealth which -20 hlth pts
void Pirate::updateHealth() {
    if (health > 20) {
        health -= 20;
    } else {
        cout << "Guybrush is dead. You play games like a dairy farmer." << endl;
    }
}

Journal* Pirate::getJournal() {
    return journal;
}