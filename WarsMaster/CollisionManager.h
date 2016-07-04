#pragma once
#include <vector>
#include "InteractEntity.h"
class CollisionManager
{
public:
	CollisionManager();
	/**
	 * Ajout d'une entité à la liste des entités sur lesquelles il faut vérifier les collisions
	 */
	void add(InteractEntity* entity);
	~CollisionManager();
private:
	std::vector<InteractEntity*> entities;
};

