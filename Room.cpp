#include "Room.hpp"

/*  name: room constructor 
    desc: room created
    pre-conditions: game object exists
    post-conditions: room created */
Room::Room() {
    forward = NULL;
    back = NULL;
    left = NULL;
    right = NULL;
}

/*  name: room deconstructor
    desc: room deleted
    pre-conditions: game object exists, room exists
    post-conditions: room deleted */
Room::~Room() {
    
}

/*  name: getName
    desc: string returned
    pre-conditions: room exists
    post-conditions: string returned */
string Room::getName() {
    return name;
}

/*  name: getDescription
    desc: string returned
    pre-conditions: room exists
    post-conditions: string returned */
string Room::getDescription() {
    return description;
}

/*  name: setRooms
    desc: sets directions to other room pointers
    pre-conditions: other rooms initialzed and passed to method
    post-conditions: directions set to other room pointers */
void Room::setRooms(Room* room1, Room* room2, Room* room3, Room* room4) {
    forward = room1;
    back = room2;
    left = room3;
    right = room4;
}

/*  name: getLeft
    desc: returns pointer to room to left
    pre-conditions: room exists
    post-conditions: returns pointer to room to left */
Room* Room::getLeft() {
    return left;
}

/*  name: getRight
    desc: returns pointer to room to right
    pre-conditions: room exists
    post-conditions: returns pointer to room to right */
Room* Room::getRight() {
    return right;
}

/*  name: getForward
    desc: returns pointer to room to forward
    pre-conditions: room exists
    post-conditions: returns pointer to room to forward */
Room* Room::getForward() {
    return forward;
}

/*  name: getBack
    desc: returns pointer to room to back
    pre-conditions: room exists
    post-conditions: returns pointer to room to back */
Room* Room::getBack() {
    return back;
}

/*  name: setInsultStatus
    desc: sets insult to T or F
    pre-conditions: room exists
    post-conditions: sets insult to T or F */
void Room::setInsultStatus() {
    insult = true;
}

/*  name: getInsultStatus
    desc: get insult status
    pre-conditions: room exists
    post-conditions: gets insult - true if pirate has gotten it */
bool Room::getInsultStatus() {
    return insult;
}