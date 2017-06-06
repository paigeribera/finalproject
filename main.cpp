/*********************************************************************
** Program name: Final Project
** Author: Paige Ribera
** Date: 
** Description: 
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

void testJournal();

int main() {
    // Game game;
    // game.play();
    
    // JOSHS SUGGESTIONS
    // 1. create a func for setting all rooms instead of individually -- DONE
    // Room* townSquare = new StartingRoom();
    // Room* bar = new BarRoom();
    // Room* ship = new ShipRoom();
    // Room* mapShack = new MapRoom();
    // Room* bossHut = new BossRoom();
    // townSquare->setRooms(ship, bossHut, bar, mapShack);
    
    Game game;
    game.play();
    // cout << townSquare->getName() << endl;
    // Pirate* player = new Pirate();
    // player->updateLocation(townSquare);
    // cout << player->getLocation()->getName() << endl;
    // cout << townSquare->getLeft()->getName() << endl;
    // player->updateLocation(player->getLocation()->getLeft());
    // cout << player->getLocation()->getName() << endl;
    
    //why is the below line seg faulting
    //player->getLocation()->menu();
    // changeRoom(player);
    
    //while char isnt dead, get his location pirate->getLocation
    //assign it to a var, and print the menu of that room
    //pirate->getLocation->menu
    
}


// void changeRoom(Pirate* player) {
//     bool validMove = false;
//     while (!validMove) {
//         cout << "Enter f to move forward, b to move back, l to move left, and r to move right." << endl;
//         char input;
//         cin >> input;
//             switch(input) {
//                 case('f'): {
//                     if (pirate->getLocation()->forward != NULL) {
//                         pirate->updateLocation(forward);
//                         validMove = true;
//                     } else {
//                         cout << "Lay off the grog. You can't go that way." << endl;
//                     }
//                     break;
//                 }
//                 case('b'): {
//                     if (pirate->getLocation()->back != NULL) {
//                         pirate->updateLocation(back);
//                         validMove = true;
//                     } else {
//                         cout << "Lay off the grog. You can't go that way." << endl;
//                     }
//                     break;
//                 }
//                 case('l'): {
//                     cout << "trying to go left" << endl;
//                     if (pirate->getLocation()->left != NULL) {
//                         cout << "left is not null, updating location to left" << endl;
//                         cout << "left is currently: " << getLeft();
//                         pirate->updateLocation(left);
//                         validMove = true;
//                     } else {
//                         cout << "Lay off the grog. You can't go that way." << endl;
//                     }
//                     break;
//                 }
//                 case('r'): {
//                     if (pirate->getLocation()->right != NULL) {
//                         pirate->updateLocation(right);
//                         validMove = true;
//                     } else {
//                         cout << "Lay off the grog. You can't go that way." << endl;
//                     }
//                     break;
//                 }
//                 default: {
//                     cout << "Lay off the grog. You can't go that way." << endl;
//                 }
//             }
//     }
// }


void testJournal() {
        Journal journal;
    journal.addInsult(2);
    journal.addInsult(3);
    journal.display();
    journal.deleteInsult(1);
    journal.display();
    journal.deleteInsult(2);
    journal.display();
}