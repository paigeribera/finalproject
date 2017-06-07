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
    name = "Bloody Lip Bar and Grille";
    description = "Your local grog supplier.";
}

int BarRoom::interact() {
    int userInput = 0;
    while (!painting) {
        cout << "There is an interesting painting of a man wearing green pants digging a grave. He is shirtless and is missing an eye. He kind of looks like your father." << endl;
        cout << "Enter 1 to touch the painting. Enter 2 to leave it alone. Enter 3 to leave the room." << endl;
        cin >> userInput;
            if (userInput != 1 && userInput != 2 && userInput != 3) {
                cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
            } else if (userInput == 1) {
                cout << "You touch the painting. It's strangely sticky. As you pull your hand back, it rips off a piece of the painting." << endl;
                cout << "You examine the piece of painting. It reads: ";
                cout << "You run THAT fast?" << endl;
                cout << "You add the insult to your journal." << endl;
                painting = true;
                return 4;
            } else {
                cout << "You back away from the painting." << endl;
                cout << "It's making you feel a little uncomfortable, huh?" << endl;
                return -1;
            }
    } 
    cout << "You've already touched this. Plus, the bartender is eyeballing you. Better to leave his stuff alone." << endl;
    
}