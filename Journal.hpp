/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
*********************************************************************/
#ifndef JOURNAL_HPP
#define JOURNAL_HPP
#include <string>
#include <iostream>
#include <map>
#include "Room.hpp"
using namespace std;

class Journal {
    public:
        Journal();
        int getNumOfPages();
        void addInsult(int);
        void deleteInsult(int);
        void display();
        
    protected:
        int numOfPages;
        map<int, bool> journal;
        map<int, bool>::iterator it;
};
#endif