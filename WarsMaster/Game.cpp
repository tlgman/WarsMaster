#include "Game.h"

using namespace std;

Game::Game(){
    this->level = Level();
}

Game::Game(string levelName){
    this->level = Level(levelName);
}


Game::~Game(){}


