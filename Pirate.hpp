/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Pirate class is used to create a pirate object.
** The pirate object has a journal which holds the insults the player
** collects. The pirate's location can be updated and he has a health
** limit, which can be changed when the player is fighting the boss
*********************************************************************/
#ifndef PIRATE_HPP
#define PIRATE_HPP
#include <string>
#include <iostream>
#include <vector>
#include "Room.hpp"
#include "Journal.hpp"
using namespace std;

class Room;
class Journal;

class Pirate {
    public:
        Pirate(Room*);
        ~Pirate();
        void updateLocation(Room*);
        Room* getLocation();
        int getHealth();
        void updateHealth();
        Journal* getJournal();
        
    protected:
        Room* location;
        string name;
        string description;
        int health;
        Journal* journal;
};
#endif