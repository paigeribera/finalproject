#include "Pirate.hpp"

/*  name: starting room constructor 
    desc: starting room made with string 
    pre-conditions: game object exists
    post-conditions: starting room created */
Pirate::Pirate(Room *startingLocation) {
    location = startingLocation;
    name = "Guybrush Threepwood";
    description = "A mighty pirate-in-training who can hold his breath for 10 minutes.";
    health = 100;
    journal = new Journal();
}

/*  name: pirate deconstructor
    desc: pirate is deleted in game, so only need to delete pirate's journal
    pre-conditions: pirate exists
    post-conditions: journal deleted */
Pirate::~Pirate() {
    delete journal;
}

/*  name: updateLocation
    desc: updates location (room) of pirate. used to keep track of player
    pre-conditions: pirate and game created
    post-conditions: pirate's location updated to room passed */
void Pirate::updateLocation(Room* room) {
    location = room;
}

/*  name: getLocation
    desc: returns location (room) of pirate
    pre-conditions: pirate and game created
    post-conditions: room returned */
Room* Pirate::getLocation() {
    return location;
}

/*  name: getHealth
    desc: gets pirate's health
    pre-conditions: pirate exists
    post-conditions: returns int */
int Pirate::getHealth() {
    return health;
}

/*  name: updateHealth
    desc: called when player is fighting boss. if he gives wrong answer,
    -50 health pts
    pre-conditions: pirate exists, boss fight happening
    post-conditions: pirate's health changes */
void Pirate::updateHealth() {
        health = health - 50;
}

/*  name: getJournal
    desc: gets pirate's journal
    pre-conditions: pirate and game and journal exist
    post-conditions: returns pirate's journal */
Journal* Pirate::getJournal() {
    return journal;
}