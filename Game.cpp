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
    while (pirate->getHealth() > 0 && moves < 20) {
        // get pirate current location info. name, description
        pirate->getLocation()->getName();
        pirate->getLocation()->getDescription();
        // IF you can do something here, pull that up. room->interact();
        pirate->getLocation()->interact();
        // otherwise, print moving options.
        changeRoom();
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
    while (!validMove) {
        //cout << "Enter f to move forward, b to move back, l to move left, and r to move right." << endl;
        if (pirate->getLocation()->getForward() != NULL) {
            cout << "Enter f to move forward." << endl;
        }
        if (pirate->getLocation()->getBack() != NULL) {
            cout << "Enter b to move back." << endl;
        }
        if (pirate->getLocation()->getLeft() != NULL) {
            cout << "Enter l to move left." << endl;
        }
        if (pirate->getLocation()->getRight() != NULL) {
            cout << "Enter r to move right." << endl;
        }
        char input;
        cin >> input;
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
                    cout << "trying to go left" << endl;
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