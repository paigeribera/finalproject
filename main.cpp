/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 6/13/2017
** Description: To make, type make. To run, type ./finalproject. The
** player is Guybrush Threepwood, a wanna-be pirate. The goal is to collect
** insults that are "hidden" in various rooms on the island to use in battle
** against the sword master. A game object is created and the play method is
** called, which controls the running of the game. If you don't collect enough
** insults, you can't win. 
*********************************************************************/
#include "Room.hpp"
#include "Pirate.hpp"
#include "Journal.hpp"
#include "Game.hpp"
#include "BarRoom.hpp"
#include "BossRoom.hpp"
#include "MapRoom.hpp"
#include "ShipRoom.hpp"
#include "StartingRoom.hpp"
#include "Pirate.hpp"
#include <time.h>
#include <stdlib.h>

void testJournal();

int main() {
    srand (time(NULL));
    // vector<string> v = {"fck ", "i hate u"};
    // vector<int> b = {1, 2, 3};
    Game game;
    game.play();
}

void testJournal() {
    Game game;
   Pirate *p = game.getPirate();
    Journal *j = p->getJournal();
    j->addInsult(1);
    j->addInsult(3);
    j->display();
        Journal journal;
    journal.addInsult(2);
    journal.addInsult(3);
    journal.display();
    journal.deleteInsult();
    journal.display();
    journal.deleteInsult();
    journal.display();
}