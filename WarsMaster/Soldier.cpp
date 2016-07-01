#include "Soldier.h"
#include <iostream>

using namespace std;

Soldier::Soldier(sf::Vector2i position, string texPath) : LivingEntity(position) {
	sf::Texture* texture = new sf::Texture;
	if (texture->loadFromFile(texPath)) {
		texture->setSmooth(true);
		this->sprite.setTexture(*texture);
	}
	else {
		cerr << "Error chargement " << endl;
	}
}

Soldier::~Soldier() {}

void Soldier::update(sf::RenderWindow& rw) {
	rw.draw(this->sprite);
}
