/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Bar Room class inherits from Room. It is used to create
** a specific bar room, which is located to the left of the player's
** starting point. In the bar room, the insult is accessed by interacting
** with a painting in the room. 
*********************************************************************/
#ifndef BARROOM_HPP
#define BARROOM_HPP
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

class BarRoom: public Room {
    public: 
        BarRoom();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
};
#endif