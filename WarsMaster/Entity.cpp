#include "Entity.h"

using namespace sf;

Entity::Entity() {
    this->position = Vector2i(0, 0);
}
Entity::Entity(const sf::Vector2i position){
    this->position = position;
}

Entity::~Entity() {}

sf::Vector2i Entity::getPosition() const{
    return this->position;
}
void Entity::setPosition(const sf::Vector2i position){
    this->position = position;
}

std::vector<sf::Drawable*> Entity::getAppearance() const {
	return this->appearance;
}

void Entity::setAppearance(std::vector<sf::Drawable*> appearance) {
	this->appearance = appearance;
}
