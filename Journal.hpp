/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: The Journal class holds a map<int,bool> that the pirate
** characters "holds". As the pirate collects insults, they are added
** to the map by their insult num (see txt doc) and true or false to
** to indicate whether they've been collected by the pirate. The journal
** has a set number of pages, and insults can be deleted or added, and the
** contents of the journal can be displayed. 
*********************************************************************/
#ifndef JOURNAL_HPP
#define JOURNAL_HPP
#include <string>
#include <iostream>
#include <map>
#include "Room.hpp"
#include "Helper.hpp"
using namespace std;

class Journal {
    public:
        Journal();
        int getNumOfPages();
        void addInsult(int);
        void deleteInsult();
        void display();
        bool findInsult(int);
        
    protected:
        int numOfPages;
        map<int, bool> journal;
        map<int, bool>::iterator it;
};
#endif