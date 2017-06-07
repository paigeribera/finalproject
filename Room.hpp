/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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
        virtual string getName();
        virtual string getDescription();
        virtual void menu();
        // adds insult to map
        // virtual void getInsult();
        //virtual void userMenu();
        void setRooms(Room*, Room*, Room*, Room*);
        Room* getLeft();
        Room* getBack();
        Room* getRight();
        Room* getForward();
        virtual int interact();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
    string name;
    string description;
    // "object" that holds the clue...chest, basket, painting, whatever
    vector<string> container;
    Pirate* pirate;
};
#endif