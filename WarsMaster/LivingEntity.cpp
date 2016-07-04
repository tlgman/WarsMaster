#include "LivingEntity.h"

using namespace sf;
using namespace std;

LivingEntity::LivingEntity(Vector2i pos, vector<IntRect> listBoxes) : InteractEntity(pos, listBoxes) {
    maxLives = 100;
    lives = maxLives;
}


LivingEntity::LivingEntity(Vector2i pos, unsigned int maxLives) : InteractEntity(pos) {
    this->maxLives = maxLives;
    this->lives = maxLives;
}

LivingEntity::~LivingEntity(){}


void LivingEntity::setLives(unsigned int lives){
    this->lives = lives;
}

unsigned int LivingEntity::getLives(){
    return this->lives;
}

void LivingEntity::setMaxLives(const unsigned int maxLives){
    this->maxLives = maxLives;
    if(lives > maxLives){
        this->lives = maxLives;
    }
}

unsigned int LivingEntity::getMaxLives(){
    return this->maxLives;
}


void LivingEntity::regenerateLives(){
    if(lives < maxLives){
        lives = maxLives;
    }
}
