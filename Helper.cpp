#include "Helper.hpp"

/*  name: getInt
    desc: verifies that the cin is of type int - if not or invalid input then it
    will clear the stream then ask the phrase/question again until correct input
    is inserted 
    pre-conditions: need user input 
    post-conditions: input set once valid */
int getInt(string phrase) {
    int response = 0;
    while(1) {
        cout << phrase << endl;
        if(cin >> response) {
            return response;
        }
        cout << "Please enter an integer" << endl;
        clearStream();
    }
}

/*  name: getInt10
    desc: verifies that the cin is of type int - if not or invalid input then it
    will clear the stream then ask the phrase/question again until correct input
    is inserted 
    pre-conditions: need user input 
    post-conditions: input set once valid */
int getInt10(string phrase) {
    int response = 0;
    while(1) {
        cout << phrase << endl;
        if(cin >> response && response < 11 && response > 0) {
            return response;
        }
        cout << "Please enter an integer 1 - 10" << endl;
        clearStream();
    }
}


/*  name: clearStream
    desc: cleans stream of any bad input
    pre-conditions: user input
    post-conditions: stream cleared */
void clearStream() {
    cin.clear(); 
    cin.ignore(1000, '\n'); 
}

/*  name: validateInputRange
    desc: checks that user input is within a certain range
    pre-conditions: input, min size and max size
    post-conditions: returns true if input's good */
bool validateInputRange(int input, int minSize, int maxSize) {
    if(input < minSize || input > maxSize) {
        return false;
    }
    return true;
}

/*  name: getUserInput
    desc: checks that user input is within a certain range
    pre-conditions: input, min size and max size
    post-conditions: returns int if valid */
int getUserInput(string phrase) {
    int userInput = 0;
    
    while(1) {
        userInput = getInt(phrase);
        
        if(validateInputRange(userInput, 1, 2)) {
           return userInput; 
        }
        clearStream();
    }
}