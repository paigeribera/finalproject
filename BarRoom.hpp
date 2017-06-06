/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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
        void interact();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
        bool painting;
};
#endif