#pragma once

#include <vector>
#include "Entity.h"

/**
 * Permet de géré une liste d'entité (leur affichage, ...)
 */
class EntitiesManager{
public:
	EntitiesManager();

	/**
	* Vide la liste (! en vidant la mémoire de entités)
	*/
	~EntitiesManager();


	/**
	* Met visuellement à jour les entités
	*/
	void update(sf::RenderWindow& rw);

	/**
	* Ajoute un entité dans le manager
	*/
	void add(Entity* e);
	/**
	 * Enlève l'entité donnée de la liste
	 * --> Ne fait pas de delete
	 */
	bool remove(Entity* e);

	/**
	 * Vide la liste
	 *  --> Ne fait pas de delete
	 */
	void clear();

private:
	std::vector<Entity*> listEntities;
};

