/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
*********************************************************************/
#ifndef OBJECTROOM_HPP
#define OBJECTROOM_HPP
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "Room.hpp"
#include "Pirate.hpp"

class ObjectRoom: public Room {
    public: 
        ObjectRoom();
        
    protected:
        ObjectRoom* forward;
        ObjectRoom* left;
        ObjectRoom* right;
        ObjectRoom* back;
        Pirate* pirate;
};
#endif