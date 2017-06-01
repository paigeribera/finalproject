#include "Game.hpp"

Game::Game() {
    moves = 0;
    pirate = new Pirate();
    // startingRoom = new StartingRoom();
    // barRoom = new BarRoom();
    // bossRoom = new BossRoom();
    // shipRoom = new ShipRoom();
}

Game::~Game() {
    
}


void Game::play() {
     /* keep game going while guybrush is alive AND the player
     hasn't used more than 20 moves...?? maybe handle guybrush dying
     a different way since he would ever die at the end while battling
     the swordmaster...*/
    while (pirate->getHealth() > 0 && moves < 20) {
        
    }
}