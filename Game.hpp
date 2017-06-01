/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
*********************************************************************/
#ifndef GAME_HPP
#define GAME_HPP
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Room.hpp"
#include "Pirate.hpp"
#include "StartingRoom.hpp"
#include "BarRoom.hpp"
#include "BossRoom.hpp"
#include "ShipRoom.hpp"

class Game {
    public:
        Game();
        ~Game();
        void play();
    
    protected:
        Room* startingRoom;
        Room* barRoom;
        Room* bossRoom;
        Room* shipRoom;
        Pirate* pirate;
        int moves;
};
#endif