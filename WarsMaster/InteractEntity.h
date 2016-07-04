#ifndef INTERACTENTITY_H
#define INTERACTENTITY_H

#include "Entity.h"
#include <vector>

/**
 * Entité avec qui peut entrer en collision avec des éléments du jeu
 */
class InteractEntity : public Entity
{
    public:
		InteractEntity(sf::Vector2i pos = sf::Vector2i(0, 0), std::vector<sf::IntRect> listBoxes = {});
		virtual void update(sf::RenderWindow& rw);
        bool isCollisable();
    private:
		/**
		 * La liste des boundingbox composant l'entité
		 */
		std::vector<sf::IntRect> listBoxes;
        bool collisable;
		/** Le dernier mouvement demandé
		 * --> Sera réalisé (si possible) pendant le update
		 */
		sf::Vector2i movement;

};

#endif // INTERACTENTITY_H
