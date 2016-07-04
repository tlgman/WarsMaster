#pragma once
#include <vector>
#include "InteractEntity.h"
class CollisionManager
{
public:
	CollisionManager();
	/**
	 * Ajout d'une entit� � la liste des entit�s sur lesquelles il faut v�rifier les collisions
	 */
	void add(InteractEntity* entity);
	~CollisionManager();
private:
	std::vector<InteractEntity*> entities;
};

