/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Map Room class inherits from Room. It is used to create
** a specific map room, which is located to the right of the player's
** starting point. In the map room, the insult is accessed by interacting
** with a map on the wall.
*********************************************************************/
#ifndef MAPROOM_HPP
#define MAPROOM_HPP
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

class MapRoom: public Room {
    public: 
        MapRoom();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
};
#endif