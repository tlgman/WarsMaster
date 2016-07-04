#include "InteractEntity.h"

using namespace sf;
using namespace std;

InteractEntity::InteractEntity(Vector2i pos, vector<IntRect> listBoxes) : Entity(pos) {
	this->listBoxes = listBoxes;
    this->collisable = true;
	this->movement = Vector2i(0, 0);
}

bool InteractEntity::isCollisable() {
	return this->collisable;
}

void InteractEntity::update(RenderWindow& rw) {
	if (movement.x != 0 || movement.y != 0) {
		this->position.x = this->position.x + movement.x;
		this->position.y = this->position.y + movement.y;
		movement = {0,0};
	}
	for (auto shape = this->appearance.begin(); shape != appearance.end(); ++shape) {
		rw.draw(**shape);
	}
}
