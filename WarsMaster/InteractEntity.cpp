#include "InteractEntity.h"

using namespace sf;

InteractEntity::InteractEntity(Vector2i pos) : Entity(pos) {
    this->collisable = true;
}

bool InteractEntity::isCollisable() {
	return this->collisable;
}
