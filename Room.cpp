#include "Room.hpp"

Room::Room() {
    forward = NULL;
    back = NULL;
    left = NULL;
    right = NULL;
}

Room::~Room() {
    
}

string Room::getName() {
    return name;
}

string Room::getDescription() {
    return description;
}

void Room::setRooms(Room* room1, Room* room2, Room* room3, Room* room4) {
    forward = room1;
    back = room2;
    left = room3;
    right = room4;
}

void Room::interact() {
    
}

Room* Room::getLeft() {
    return left;
}

Room* Room::getRight() {
    return right;
}

Room* Room::getForward() {
    return forward;
}

Room* Room::getBack() {
    return back;
}

void Room::menu() {
    bool validMove = false;
    while (!validMove) {
        cout << "Enter f to move forward, b to move back, l to move left, and r to move right." << endl;
        char input;
        cin >> input;
            switch(input) {
                case('f'): {
                    if (forward != NULL) {
                        pirate->updateLocation(forward);
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('b'): {
                    if (back != NULL) {
                        pirate->updateLocation(back);
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('l'): {
                    cout << "trying to go left" << endl;
                    if (left != NULL) {
                        cout << "left is not null, updating location to left" << endl;
                        cout << "left is currently: " << getLeft();
                        pirate->updateLocation(left);
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('r'): {
                    if (right != NULL) {
                        pirate->updateLocation(right);
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