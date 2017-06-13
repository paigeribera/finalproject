/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Ship Room class inherits from Room. It is used to create
** a specific ship room, which is located to the front/north of the player's
** starting point. In the ship room, the insult is accessed by interacting
** with the drunks sitting on the ship.
*********************************************************************/
#ifndef SHIPROOM_HPP
#define SHIPROOM_HPP
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

class ShipRoom: public Room {
    public: 
        ShipRoom();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
};
#endif