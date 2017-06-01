#include "Journal.hpp"

Journal::Journal() {
    map<int, string> journal;
    numOfPages = 5;
}


void Journal::addInsult() {
    // if there's room in your journal
    if (numOfPages > 0) {
        
    } else {
        cout << "Your journal is full!" << endl;
        cout << "Would you like to delete an entry?" << endl;
    }
}