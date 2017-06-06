/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
*********************************************************************/
#ifndef STARTINGROOM_HPP
#define STARTINGROOM_HPP
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Room.hpp"
#include "Pirate.hpp"
#include "BarRoom.hpp"
#include "BossRoom.hpp"
#include "MapRoom.hpp"
#include "ShipRoom.hpp"
#include "StartingRoom.hpp"

class StartingRoom: public Room {
    public: 
        StartingRoom();
        StartingRoom(string);
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
        // Pirate* pirate;
};
#endif