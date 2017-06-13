/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Room class is the base class for all inherited
** room classes. It has a function, set rooms, that lets the room
** have a room to its front, back, left, and right. It also has
** functions that return the room that is to the F/B/L/R of the room
** the pirate is currently in. 
*********************************************************************/
#ifndef ROOM_HPP
#define ROOM_HPP
#include <string>
#include <iostream>
#include <vector>
#include "Pirate.hpp"
using namespace std;

class Pirate;

class Room {
    public:
        Room();
        virtual ~Room();
        string getName();
        string getDescription();
        void setRooms(Room*, Room*, Room*, Room*);
        Room* getLeft();
        Room* getBack();
        Room* getRight();
        Room* getForward();
        virtual bool getInsultStatus();
        virtual void setInsultStatus();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
        string name;
        string description;
        Pirate* pirate;
        bool insult;
};
#endif