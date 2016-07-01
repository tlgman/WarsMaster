#include "EntitiesManager.h"



EntitiesManager::EntitiesManager(){}


EntitiesManager::~EntitiesManager(){
	for (auto entity = this->listEntities.begin(); entity != this->listEntities.end(); ++entity) {
		delete (*entity);
	}
}

void EntitiesManager::update(sf::RenderWindow& rw) {
	for (auto entity = this->listEntities.begin(); entity != this->listEntities.end(); ++entity) {
		(*entity)->update(rw);
	}
}

void EntitiesManager::add(Entity* e) {
	this->listEntities.push_back(e);
}


bool EntitiesManager::remove(Entity* e) {
	for (auto entity = this->listEntities.begin(); entity != this->listEntities.end(); ++entity) {
		if (*entity == e) {
			this->listEntities.erase(entity);
			return true;
		}
	}
	return false;
}

void EntitiesManager::clear() {
	this->listEntities.clear();
}