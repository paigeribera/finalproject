#include "BossRoom.hpp"
#include <time.h>
#include <stdlib.h>

BossRoom::BossRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    name = "The Swordmaster's Hut";
    description = "'I hope your wit is as sharp as your sword.'";
    bossEngage = false;
}

int BossRoom::interact() {
    int userInput = 0;
    while (!bossEngage) {
        cout << "You approach the Sword Master's hut." << endl;
        cout << "The Sword Master must have heard you coming, because you see someone step outside." << endl;
        cout << "You get closer, and..." << endl;
        cout << "and...see a beautiful woman with curly hair and a very sharp sword. Pointed at you. Your throat, specifically." << endl;
        cout << "Enter 1 to engage the Sword Master. Enter 2 to escape with your life (but maybe not your dignity)." << endl;
        cin >> userInput;
        if (userInput != 1 && userInput !=2) {
             cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
        } else if (userInput == 1) {
            cout << "Guybrush: My name is Guybrush Threepwood and I'm going to be a mighty pirate." << endl;
            // add more dialogue, write fightBoss 
            bossEngage = true;
            fightBoss();
        } else {
            cout << "Time to hightail it out of here!" << endl;
            return -1;
        }
    }
}

void BossRoom::fightBoss() {
    vector<string> insults;
    string insult1 = "People fall at my feet when they see me coming!";
    string insult2 = "I'm not going to take your insolence sitting down!";
    string insult3 = "I once owned a dog that was smarter than you.";
    string insult4 = "Nobody's ever drawn blood from me and nobody ever will.";
    string insult5 = "You make me want to puke.";
    string insult6 = "I've spoken with apes more polite than you.";
    
    // why wont my stuff compile with c++11??
    insults.push_back(insult1);
    insults.push_back(insult2);
    insults.push_back(insult3);
    insults.push_back(insult4);
    insults.push_back(insult5);
    insults.push_back(insult6);
    int randomInsult = (rand() % 6 + 1);
    
    cout << health << endl;
    while (pirate->getHealth() > 0) {
        cout << "Sup" << endl;
    }
}