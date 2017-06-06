/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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
        Pirate* pirate;
};
#endif