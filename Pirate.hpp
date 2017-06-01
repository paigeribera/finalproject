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

class Pirate {
    public:
        Pirate();
        void updateLocation(Room*);
        Room* getLocation();
        int getHealth();
        void updateHealth();
        
    protected:
        Room* location;
        string name;
        string description;
        int health;
        Journal* journal;
};
#endif