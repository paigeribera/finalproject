/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Game class controls the playing of the game. It
** holds and creates the pirate character and all of the rooms the
** player can enter. The game, having the pirate as a member variable,
** can be move the pirate around into different rooms and controls the
** pirate's interaction with his environment. Its other variables control
** whether the game should end and if the player has won. 
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
#include "Helper.hpp"
#include "ShipRoom.hpp"
#include <time.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "MapRoom.hpp"

class Game {
    public:
        Game();
        ~Game();
        void play();
        void changeRoom();
        Pirate *getPirate();
        int interactRoom(Room*);
        void finalFight();
        void endGame();
        
    protected:
        int moves;
        Pirate* pirate;
        Room* townSquare;
        Room* bar;
        Room* ship;
        Room* mapShack;
        Room* bossHut;
        bool victoryStatus;
        bool gameStatus; 

};
#endif