#include "CollisionManager.h"



CollisionManager::CollisionManager(){
}


CollisionManager::~CollisionManager(){
}

void CollisionManager::add(InteractEntity* entity) {
	this->entities.push_back(entity);
}
