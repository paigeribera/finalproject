#include "Journal.hpp"

/*  name: journal constructor
    desc: creates journal object
    pre-conditions: n/a
    post-conditions: journal created w/ 4 pages and one insult already added */
Journal::Journal() {
    numOfPages = 4;
    journal.insert(pair<int,bool>(1, true));
}

/*  name: addInsult
    desc: adds an insult to the journal
    pre-conditions: journal exists, num passed 
    post-conditions: journal gets new addition */
void Journal::addInsult(int insultNum) {
    // if there's room in your journal
    if (numOfPages > 0) {
        it = journal.find(insultNum);
        if (it == journal.end()) {
            journal.insert(pair<int, bool>(insultNum, true));
            numOfPages--;
        } else {
            cout << "that counter insult is already in your journal. can you even read?";
        }
    } else {
        cout << "Your journal is full!" << endl;
        // ask if they want to delete at this point? 1 to keep as is, 2 to delete.
    }
}

/*  name: deleteInsult
    desc: deletes insult from journal as long as it isn't insult #1
    pre-conditions: journal exists, insult to be deleted exists
    post-conditions: insult deleted from journal */
// need input validation at the point this is asked.
// DISPLAY insults and then them to enter number they want to delete
void Journal::deleteInsult(int insultNum) {
    if (insultNum == 1) {
        cout << "The pirate leaders gave you that one. I'd probably keep it..." << endl;
    } else {
         switch(insultNum) {
                case 2: {
                    it = journal.find(insultNum);
                    if (it != journal.end()) {
                    journal.erase(2);
                    } else {
                        cout << "you can't erase what you don't have silly" << endl;
                    }
                    break;
                }
                case 3: {
                    it = journal.find(insultNum);
                    if (it != journal.end()) {
                    journal.erase(3);
                    } else {
                        cout << "you can't erase what you don't have silly" << endl;
                    }
                    break;
                }
                case 4: {
                    it = journal.find(insultNum);
                    if (it != journal.end()) {
                    journal.erase(4);
                    } else {
                        cout << "you can't erase what you don't have silly" << endl;
                    }
                    break;
                }
                case 5: {
                    it = journal.find(insultNum);
                    if (it != journal.end()) {
                    journal.erase(5);
                    } else {
                        cout << "you can't erase what you don't have silly" << endl;
                    }
                    break;
                }
                case 6: {
                   it = journal.find(insultNum);
                    if (it != journal.end()) {
                    journal.erase(6);
                    } else {
                        cout << "you can't erase what you don't have silly" << endl;
                    }
                    break;
                }
                default: {
                    cout << "Can you count mate?" << endl;
                    // should  i cin another insult num here?
                    break;
                }
            }
    }
}

void Journal::display() {
    cout << "To best the swordmaster in a battle of steel and wit, you must ";
    cout << "collect counter insults. Each insult is numbered." << endl;
    cout << "The more you collect, the easier your battle with the ";
    cout << "swordmaster will be. There are 6 total, but your journal ";
    cout << "only has 4 pages. Here's what you have so far: " << endl;
    for (it=journal.begin(); it!=journal.end(); it++) {
        if (it->second != false) {
            switch(it->first) {
                case 1: {
                    cout << "#1 Even BEFORE they smell your breath?" << endl;
                    break;
                }
                case 2: {
                    cout << "#2 Your hemorroids are flaring up again, eh?" << endl;
                    break;
                }
                case 3: {
                    cout << "#3 He must have taught you everything you know." << endl;
                    break;
                }
                case 4: {
                    cout << "#4 You run THAT fast?" << endl;
                    break;
                }
                case 5: {
                    cout << "#5 You make me think somebody already did." << endl;
                    break;
                }
                case 6: {
                    cout << "#6 I'm glad to hear you attended your family reunion!" << endl;
                    break;
                }
                default: {
                    break;
                }
            }
        }
    }
}