#include "Game.hpp"

/*  name: game constructor 
    desc: rooms initialized, map set up with rooms connecting to each other,
    pirate created
    pre-conditions: game object is created
    post-conditions: rooms initialized, map set up with rooms connecting to each other,
    pirate created */
Game::Game() {
    moves = 0;
    townSquare = new StartingRoom();
    bar = new BarRoom();
    ship = new ShipRoom();
    mapShack = new MapRoom();
    bossHut = new BossRoom();
    townSquare->setRooms(ship, bossHut, bar, mapShack);
    bar->setRooms(NULL, NULL, NULL, townSquare);
    ship->setRooms(NULL, townSquare, NULL, NULL);
    mapShack->setRooms(NULL, NULL, townSquare, NULL);
    bossHut->setRooms(townSquare, NULL, NULL, NULL);
    pirate = new Pirate(townSquare);
    victoryStatus = false;
    gameStatus = true;
}

/*  name: game deconstructor
    desc: destroys objects
    pre-conditions: objects exist
    post-conditions: objects deleted */
Game::~Game() {
  delete townSquare;
  delete bar;
  delete ship;
  delete mapShack;
  delete bossHut;
  delete pirate;
   
}

/*  name: play
    desc: main function that controls playing of game. prints info to user
    and while a certain num of moves havent been made and game status is
    still true, keeps letting player move pirate around and interact with rooms
    pre-conditions: game object exists
    post-conditions: game is played till max moves are hit or player fights boss */
void Game::play() {
    Room* location = pirate->getLocation();
    cout << "You stand in the town square of Scabb Island." << endl;
    cout << "You reminisce on the conversation you had previously with the Pirate Leaders." << endl;
    cout << "To become a great pirate, you must first complete the 3 Trials." << endl;
    cout << "The first trial is to defeat the Sword Master of Scabb Island." << endl;
    cout << endl;
    cout << endl;
    cout << "You've stolen your sword, and you have a puke-covered journal one of the leaders gave you." << endl;
    cout << "He gave it to you saying something about sharpening your wit by collecting insults." << endl;
    cout << "Without the proper insults, you won't be able to defeat the Sword Master." << endl;
    cout << "You open the journal. It has a few entries already." << endl;
    pirate->getJournal()->display();
    cout << endl;
    cout << endl;
    
    while (moves < 12 && gameStatus) {
        interactRoom(location);
        // otherwise, print moving options.
        changeRoom();
        location = pirate->getLocation();
        moves++;
    }
    
    if (moves >= 12) {
        cout << "You LOSE. Goodday sir." << endl;
    }
}

/*  name: interactRoom
    desc: checks what rooms are available, asks for input, lets pirate
    move there
    pre-conditions: pirate exists, rooms exist
    post-conditions: something within room changes depending on player's
    interaction with it, journal updates added */
int Game::interactRoom(Room* location) {
    int userInput = 0;
    string getNumberString;
    if (location->getName() == "Town Square") {
        cout << "You stand in the town square of Scabb Island." << endl;
        while (!location->getInsultStatus()) {
            cout << "There is a post with a sign on it." << endl;
            getNumberString = "Enter 1 to rip the sign off the post. Enter 2 to leave it alone.";
            userInput = getInt(getNumberString);
                if (userInput != 1 && userInput != 2) {
                   cout << "Another pirate that can't count. Want to try that again?" << endl;
                    cin >> userInput; 
                } else if (userInput == 1) {
                    cout << "You rip the sign off the post and read it." << endl;
                    cout << "It says: You make me think somebody already did." << endl;
                    cout << "You add the insult to your journal." << endl;
                    pirate->getJournal()->addInsult(5);
                    pirate->getJournal()->display();
                    if (pirate->getJournal()->getNumOfPages() == 0) {
                        string getNumber = "Enter 1 to delete a journal entry. Enter 2 to leave it as is.";
                        int input = getInt(getNumber);
                        if (input == 1) {
                            pirate->getJournal()->deleteInsult();
                        }
                    }
                    location->setInsultStatus();
                    return 0;
                } else {
                    cout << "You leave the sign up. Maybe there's another pirate out there that can read it. Maybe..." << endl;
                    return -1;
                }
        }
    } else if (location->getName() == "Bloody Lip Bar and Grille") {
        while (!location->getInsultStatus()) {
            cout << "There is an interesting painting of a man wearing green pants digging a grave. He is shirtless and is missing an eye." << endl;
            cout << "He kind of looks like your father." << endl;
            getNumberString = "Enter 1 to touch the painting. Enter 2 to leave it alone.";
            userInput = getInt(getNumberString);
                if (userInput != 1 && userInput != 2) {
                    cout << "Another pirate that can't count. Want to try that again?" << endl;
                    cin >> userInput;
                } else if (userInput == 1) {
                    cout << "You touch the painting. It's strangely sticky. As you pull your hand back, it rips off a piece of the painting." << endl;
                    cout << "You examine the piece of painting. It reads: ";
                    cout << "You run THAT fast?" << endl;
                    cout << "You add the insult to your journal." << endl;
                    pirate->getJournal()->addInsult(4);
                    pirate->getJournal()->display();
                    if (pirate->getJournal()->getNumOfPages() == 0) {
                        string getNumber = "Enter 1 to delete a journal entry. Enter 2 to leave it as is.";
                        int input = getInt(getNumber);
                        if (input == 1) {
                            pirate->getJournal()->deleteInsult();
                        }
                    }
                    location->setInsultStatus();
                    return 0;
                } else {
                    cout << "You back away from the painting." << endl;
                    cout << "It's making you feel a little uncomfortable, huh?" << endl;
                    return -1;
                }
        } 
        cout << "You've already touched this. Plus, the bartender is eyeballing you. Better to leave his stuff alone." << endl;
    } else if (location->getName() == "The Swordmaster's Hut") {
        while (!location->getInsultStatus()) {
            cout << "You approach the Sword Master's hut." << endl;
            cout << "The Sword Master must have heard you coming, because you see someone step outside." << endl;
            cout << "You get closer, and..." << endl;
            cout << "and...see a beautiful woman with curly hair and a very sharp sword. Pointed at you. Your throat, specifically." << endl;
            getNumberString = "Enter 1 to engage the Sword Master. Enter 2 to escape with your life (but maybe not your dignity).";
            userInput = getInt(getNumberString);;
            if (userInput != 1 && userInput !=2) {
                cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
            } else if (userInput == 1) {
                cout << "Guybrush: My name is Guybrush Threepwood and I'm going to be a mighty pirate." << endl;
                location->setInsultStatus();
                pirate->getJournal()->display();
                finalFight();
            } else {
                cout << "Time to hightail it out of here!" << endl;
                return -1;
            }
        }
    } else if (location->getName() == "Cartographer's Shack") {
        while (!location->getInsultStatus()) {
            cout << "There are maps covering every wall in the shack." << endl;
            cout << "There is also a little man standing behind the desk wearing a monocle." << endl;
            cout << "Wally: Welcome, welcome! Please look around!" << endl;
            getNumberString = "Enter 1 to look at the maps. Enter 2 if you're a typical pirate and don't care about maps, unless it's a treasure map.";
            userInput = getInt(getNumberString);
            if (userInput != 1 && userInput != 2) {
                cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
            } else if (userInput == 1) {
                cout << "You lean in towards one of the maps. There is some very small text at the bottom of it." << endl;
                cout << "You grab one of Wally's spare monocle's off his desk and use it to magnify the text." << endl;
                cout << "It reads: I'm glad to hear you attended your family reunion!" << endl;
                cout << "You add the insult to your journal." << endl;
                pirate->getJournal()->addInsult(6);
                location->setInsultStatus();
                pirate->getJournal()->display();
                if (pirate->getJournal()->getNumOfPages() == 0) {
                        string getNumber = "Enter 1 to delete a journal entry. Enter 2 to leave it as is.";
                        int input = getInt(getNumber);
                        if (input == 1) {
                            pirate->getJournal()->deleteInsult();
                        }
                    }
                return 0;
            } else {
                cout << "Wally loves maps a lot. You, on the other hand, not so much. You choose not to look at them." << endl;
                return -1;
            }
        }
        cout << "Wally is a little too engrossed in his maps to help you out. You've got what you need, anyway." << endl;
    } else {
        while (!location->getInsultStatus()) {
            cout << "There are three drunk pirates hanging out on the plank of the old ship." << endl;
            cout << "Drunk Pirate 1: Hey boy!" << endl;
            getNumberString = "Enter 1 to chat with the drunkos. Enter 2 if you'd rather head back and get drunk yourself.";
            userInput = getInt(getNumberString);
            if (userInput != 1 && userInput != 2) {
                cout << "Another pirate that can't count. Want to try that again?" << endl;
                cin >> userInput;
            } else if (userInput == 1) {
                cout << "Drunk Pirate 2: What are you supposed to be?" << endl;
                cout << "Guybrush: My name is Guybrush Threepwood and I'm going to be a mighty pirate." << endl;
                cout << "*all three laugh* Ha! Ha! Ha!" << endl;
                cout << "As one is still laughing hysterically, kicking his legs gleefully, his peg leg flies off at you." << endl;
                cout << "You pick up the leg. There's something etched on it." << endl;
                cout << "It reads: He must have taught you everything you know." << endl;
                cout << "You add the insult to your journal." << endl;
                pirate->getJournal()->addInsult(3);
                location->setInsultStatus();
                pirate->getJournal()->display();
                if (pirate->getJournal()->getNumOfPages() == 0) {
                        string getNumber = "Enter 1 to delete a journal entry. Enter 2 to leave it as is.";
                        int input = getInt(getNumber);
                        if (input == 1) {
                            pirate->getJournal()->deleteInsult();
                        }
                    }
                return 0;
            } else {
                cout << "Better to be drunk than see drunks. You head back." << endl;
                return -1;
            }
        }
        cout << "The drunks aren't much interested in you anymore." << endl;
    }
}

/*  name: getPirate
    desc: returns pointer to pirate
    pre-conditions: pirate exists
    post-conditions: returns pirate */
Pirate* Game::getPirate() {
    return pirate;
}

/*  name: finalFight
    desc: if pirate chooses to engage with sword master, final fight runs.
    using insults in pirate's journal, a "battle" happens. for every wrong
    response (if insult hasn't been picked up), pirate loses health.
    pre-conditions: pirate exists, goes to sword master hut & engages with
    sword master
    post-conditions: endGame() runs */
void Game::finalFight() {
    // the insults the boss will use
    vector<string> insults = { "People fall at my feet when they see me coming!", 
                            "I'm not going to take your insolence sitting down!", 
                            "I once owned a dog that was smarter than you.", 
                            "Nobody's ever drawn blood from me and nobody ever will.", 
                            "You make me want to puke.", 
                            "I've spoken with apes more polite than you." };
    
    // generate ran num so boss says insults in random order
    int randomInsult = (rand() % 6 + 1);
    
    /* the counter insults the player has collected. if the num in the vector (+1) 
    corresponds to an entry in the map with bool set to true, player can use that 
    counter insult against the boss */
    vector<string> counterInsults = { "Even BEFORE they smell your breath?",
                            "Your hemorroids are flaring up again, eh?",
                            "He must have taught you everything you know.",
                            "You run THAT fast?",
                            "You make me think somebody already did.",
                            "I'm glad to hear you attended your family reunion!"};
    
    /* when a ran num is generated, delete it from the vector so the boss won't use
    same insult again */
    vector<int> numbers = {1, 2, 3, 4, 5, 6};
    
    cout << "Sword Master: So, you have come to challenge me. You are too late. I'm retired." << endl;
    cout << "Guybrush: But I have to best you in a battle of metal and wit or the Pirate Leaders won't recognize me as one of their own." << endl;
    cout << "Sword Master: *sighs* This crap again...fine, let's begin." << endl;
    
    int health = pirate->getHealth();
    int rounds = 5;
    
    /* while the boss hasn't run out of insults to use or the player hasn't died, 
    keep letting them "attack" each other */
    while (rounds != 0 && health > 0) {
        for (int i =0; i < numbers.size(); i++) {
            if (numbers[randomInsult - 1] != 0) {
                cout << "Sword Master: " << insults[randomInsult - 1] << endl;
                numbers[randomInsult - 1] = 0;
                if (pirate->getJournal()->findInsult(randomInsult)) {
                    cout << "Guybrush: " << counterInsults[randomInsult - 1] << endl;
                    rounds--;
                } else {
                    cout << "Guybrush: I am rubber, you are glue." << endl;
                    pirate->updateHealth();
                    health = pirate->getHealth();
                    cout << "Yikes. Your health is at " << health << endl;
                    rounds--;
                }
            } else {
              randomInsult = (rand() % 6 + 1); 
            }
        }
    }
    
    // if player lost fight, set victoryStatus to false
    if (pirate->getHealth() <= 0) {
        victoryStatus = false;
    } else {
        victoryStatus = true;
    }
   endGame();
}

/*  name: changeRoom
    desc: checks what rooms are available, asks for input, lets pirate
    move there
    pre-conditions: pirate exists, game is still going
    post-conditions: pirate location updates*/
void Game::changeRoom() {
    bool validMove = false;
    
    // if the move is valid and game is not over
    while (!validMove && gameStatus) {
        // check to make sure the direction isn't set to null. if it exists, let the pirate move there
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
        if (cin.good()) {
            clearStream();
            switch(input) {
                case('f'): {
                    if (pirate->getLocation()->getForward() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getForward());
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('b'): {
                    if (pirate->getLocation()->getBack() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getBack());
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('l'): {
                    if (pirate->getLocation()->getLeft() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getLeft());
                        validMove = true;
                    } else {
                        cout << "Lay off the grog. You can't go that way." << endl;
                    }
                    break;
                }
                case('r'): {
                    if (pirate->getLocation()->getRight() != NULL) {
                        pirate->updateLocation(pirate->getLocation()->getRight());
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
        } else {
            clearStream();
        }
    }
}

/*  name: endGame
    desc: runs after final boss fight. prints info 
    depending on whether play won or lost 
    pre-conditions: boss fight has happened
    post-conditions: win or lose message */
void Game::endGame() {
    if (victoryStatus == true) {
        cout << "Sword Master: Well, I hope you're happy. You've defeated me. Here. *gives Guybrush a package*" << endl;
        cout << "Guybrush: What's this? *opens package*" << endl;
        cout << "Inside the package in a t-shirt. It says: 'You've defeated the Sword Master of Scabb Island.'" << endl;
        cout << "Sword Master: Show that to the Pirate Leaders as proof. Now get out of my sight." << endl;
        cout << "YOU WIN!" << endl;
    } else {
        cout << "Sword Master: Well, this must be awkward for you." << endl;
        cout << "Guybrush: I've experienced worse, actually. There was this one time - " << endl;
        cout << "Sword Master: I don't care. Get out of my sight." << endl;
        cout << "YOU LOSE! Try collecting more insults next time." << endl;
    }
    gameStatus = false;
}