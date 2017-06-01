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
using namespace std;

class Room {
    public:
        Room();
        virtual ~Room();
        virtual string getName();
        virtual string getDescription();
        // adds insult to map
        // virtual void getInsult();
        //virtual void userMenu();
        
    protected:
        Room* forward;
        Room* left;
        Room* right;
        Room* back;
    string name;
    string description;
    // "object" that holds the clue...chest, basket, painting, whatever
    vector<string> container;
};
#endif