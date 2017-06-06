#include "BarRoom.hpp"

BarRoom::BarRoom() {
    // will point to bar object
    Room* forward = NULL;
    // will point to painting object
    Room* left = NULL;
    // points back to startingRoom
    Room* right = NULL;
    Room* back = NULL;
    
    painting = false;
    bartender = false;
    
    name = "Bloody Lip Bar and Grille";
    description = "Your local grog supplier.";
}

void BarRoom::interact() {
    int userInput = 0;
    if (!painting) {
        cout << "There is an interesting painting of a man wearing green pants digging a grave." << endl;
        cout << "Enter 1 to touch the painting. Enter 2 to leave it alone." << endl;
        cin >> userInput;
            if (userInput != 1 && userInput != 2) {
                cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
            } else if (userInput == 1) {
                cout << "You touch the painting. It's strangely sticky. As you pull your hand back, it rips off a piece of the painting." << endl;
                cout << "You examine the piece of painting. It reads: /n";
                cout << "You run THAT fast?" << endl;
                cout << "You add the insult to your journal." << endl;
                pirate->getJournal()->addInsult(4);
                painting = true;
            } else {
                cout << "You back away from the painting." << endl;
            }
    } else {
        cout << "You've already touched this. Plus, the bartender is eyeballing you. Better to leave his stuff alone." << endl;
    }
}