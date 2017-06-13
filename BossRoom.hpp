/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Boss Room class inherits from Room. It is used to create
** a specific boss room, which is located to the "back" of the player's
** starting point. In the boss room, there are no insults to gather,
** but if the player engages the boss in the final fight he cannot go
** back to town. 
*********************************************************************/
#ifndef BOSSROOM_HPP
#define BOSSROOM_HPP
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

class BossRoom: public Room {
    public: 
        BossRoom();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
};
#endif