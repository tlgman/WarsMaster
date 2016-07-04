#ifndef INTERACTENTITY_H
#define INTERACTENTITY_H

#include "Entity.h"
#include <vector>

/**
 * Entit� avec qui peut entrer en collision avec des �l�ments du jeu
 */
class InteractEntity : public Entity
{
    public:
		InteractEntity(sf::Vector2i pos = sf::Vector2i(0, 0), std::vector<sf::IntRect> listBoxes = {});
		virtual void update(sf::RenderWindow& rw);
        bool isCollisable();
    private:
		/**
		 * La liste des boundingbox composant l'entit�
		 */
		std::vector<sf::IntRect> listBoxes;
        bool collisable;
		/** Le dernier mouvement demand�
		 * --> Sera r�alis� (si possible) pendant le update
		 */
		sf::Vector2i movement;

};

#endif // INTERACTENTITY_H
