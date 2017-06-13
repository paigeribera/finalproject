/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Starting Room class inherits from Room. It is used to create
** a specific starting room, which is located to the left of the player's
** starting point. In the starting room, the insult is accessed by interacting
** with a sign post. The starting room is the only room that has an accessible
** front, back, left, and right room.
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
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
};
#endif