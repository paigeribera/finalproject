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
        void addInsult();
        void deleteInsult();
        
    protected:
        int numOfPages;
        map<int, string> journal;
};
#endif