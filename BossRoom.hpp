/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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
        Pirate* pirate;
};
#endif