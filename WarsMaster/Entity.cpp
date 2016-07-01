#include "Entity.h"

using namespace sf;

Entity::Entity() {
    this->position = Vector2i(0, 0);
}
Entity::Entity(const sf::Vector2i position){
    this->position = position;
}

Entity::~Entity() {}

sf::Vector2i Entity::getPosition(){
    return this->position;
}
void Entity::setPosition(const sf::Vector2i position){
    this->position = position;
}
