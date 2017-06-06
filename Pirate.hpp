/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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