#include "Soldier.h"
#include <iostream>
#include "TextureManager.h"

using namespace std;

Soldier::Soldier(sf::Vector2i position, string texPath) : LivingEntity(position) {
	sf::Texture& texture = TextureManager::instance().getTexture(texPath);
	
	
	if (texture.loadFromFile(texPath)) {
		texture.setSmooth(true);
		this->sprite.setTexture(texture);
	}
	else {
		cerr << "Error chargement " << endl;
	}
}

Soldier::~Soldier() {}

void Soldier::update(sf::RenderWindow& rw) {
	rw.draw(this->sprite);
}
