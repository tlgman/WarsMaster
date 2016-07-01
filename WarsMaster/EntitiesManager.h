#pragma once

#include <vector>
#include "Entity.h"

/**
 * Permet de g�r� une liste d'entit� (leur affichage, ...)
 */
class EntitiesManager{
public:
	EntitiesManager();

	/**
	* Vide la liste (! en vidant la m�moire de entit�s)
	*/
	~EntitiesManager();


	/**
	* Met visuellement � jour les entit�s
	*/
	void update(sf::RenderWindow& rw);

	/**
	* Ajoute un entit� dans le manager
	*/
	void add(Entity* e);
	/**
	 * Enl�ve l'entit� donn�e de la liste
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

