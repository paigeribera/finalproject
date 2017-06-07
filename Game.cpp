#include "Game.hpp"

Game::Game() {
    moves = 0;
    
    // if i need to access these l8r and change stuff
    // make them private member variables 
    Room* townSquare = new StartingRoom();
    Room* bar = new BarRoom();
    Room* ship = new ShipRoom();
    Room* mapShack = new MapRoom();
    Room* bossHut = new BossRoom();
    townSquare->setRooms(ship, bossHut, bar, mapShack);
    bar->setRooms(NULL, NULL, NULL, townSquare);
    ship->setRooms(NULL, townSquare, NULL, NULL);
    mapShack->setRooms(NULL, NULL, townSquare, NULL);
    bossHut->setRooms(townSquare, NULL, NULL, NULL);
    pirate = new Pirate(townSquare);
}

Game::~Game() {
    
}


void Game::play() {
     /* keep game going while guybrush is alive AND the player
     hasn't used more than 20 moves...?? maybe handle guybrush dying
     a different way since he would ever die at the end while battling
     the swordmaster...*/
    while (moves < 20) {
        // get pirate current location info. name, description
        pirate->getLocation()->getName();
        pirate->getLocation()->getDescription();
        // IF you can do something here, pull that up. room->interact();
        pirate->getLocation()->interact();
        // otherwise, print moving options.
        changeRoom();
        moves++;
    }
    // changeRoom();
    // cout << "You enter the " << pirate->getLocation()->getName() << endl;
    // cout << "The plaque by the door reads: " << pirate->getLocation()->getDescription() << endl;
    // int result = pirate->getLocation()->interact();
    // if (result != -1) {
    //     pirate->getJournal()->addInsult(insult);
    // } else {
    //     pirate->updateLocation(townSquare);
    // }
}

Pirate* Game::getPirate() {
    return pirate;
}

void Game::changeRoom() {
    bool validMove = false;
    
    /* have some char entered to pull up pirate's journal??? */ 
    
    while (!validMove) {
        if (pirate->getLocation()->getForward() != NULL) {
            cout << "Enter f to move forward to the " << pirate->getLocation()->getForward()->getName();
            cout << " - " << pirate->getLocation()->getForward()->getDescription() << endl;
        }
        if (pirate->getLocation()->getBack() != NULL) {
            cout << "Enter b to move back to the " << pirate->getLocation()->getBack()->getName();
            cout << " - " << pirate->getLocation()->getBack()->getDescription() << endl;
        }
        if (pirate->getLocation()->getLeft() != NULL) {
            cout << "Enter l to move left to the " << pirate->getLocation()->getLeft()->getName();
            cout << " - " << pirate->getLocation()->getLeft()->getDescription() << endl;
        }
        if (pirate->getLocation()->getRight() != NULL) {
            cout << "Enter r to move right to the " << pirate->getLocation()->getRight()->getName();
            cout << " - " << pirate->getLocation()->getRight()->getDescription() << endl;
        }
        char input;
        cin >> input;
        clearStream();
            switch(input) {
                case('f'): {
                    if (pirate->getLocation()->getForward() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getForward());
                        //cout << "Guybrush moved forward" << endl;
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('b'): {
                    if (pirate->getLocation()->getBack() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getBack());
                        //cout << "Guybrush moved back" << endl;
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('l'): {
                    if (pirate->getLocation()->getLeft() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getLeft());
                        //cout << "Guybrush moved left" << endl;
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('r'): {
                    if (pirate->getLocation()->getRight() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getRight());
                        //cout << "Guybrush moved right" << endl;
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                default: {
                    cout << "Lay off the grog. You can't go that way." << endl;
                }
            }
    }
}