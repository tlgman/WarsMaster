#include "Level.h"

using namespace std;
using namespace sf;

Level::Level(){
    this->map = Map();
}

Level::Level(string name){
    load(name);
}


void Level::update(RenderWindow& window){

}


// Charge le niveau en fonction d'un fichier
bool Level::load(string name){
    return true;
}
