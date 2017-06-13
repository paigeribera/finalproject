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
void menu();

int main() {
    srand (time(NULL));
    menu();
}

void menu() {
    Game game;
    int userInput = 0;
    cout << "This game is based off of Moneky Island." << endl;
    cout << "Your goal is to collect enough insults to defeat the Sword Master." << endl;
    cout << "Insults are found by interacting with objects held within rooms." << endl;
    cout << "Don't take more than 12 moves or you will lose." << endl;
    cout << "Good luck!" << endl;

    while (userInput != 2) {
        cout << "Enter a number to proceed." << endl;
        cout << "Enter 1 to play the game." << endl;
        cout << "Enter 2 to quit." << endl;
        if (!(cin >> userInput)) {
            cout << "Invalid input. Please try again." << endl;
            clearStream();
        } else {
            switch(userInput) {
                case 1: {
                    game.play();
                    break;
                }
                case 2: {
                    break;
                }
                default: {
                    cout << "Invalid input. Please try again!" << endl;
                    break;
                }
            }
        }
    }
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