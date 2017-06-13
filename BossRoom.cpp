#include "BossRoom.hpp"
#include <time.h>
#include <stdlib.h>

/*  name: boss room constructor
    desc: makes boss room object
    pre-conditions: game object exists
    post-conditions: new boss room created */
BossRoom::BossRoom() {
    Room* forward = NULL;
    Room* left = NULL;
    Room* right = NULL;
    Room* back = NULL;
    
    name = "The Swordmaster's Hut";
    description = "'I hope your wit is as sharp as your sword.'";
    insult = false;
}
