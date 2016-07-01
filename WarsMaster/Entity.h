#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>

/**
 * Class g�n�rale(abstraite) permettant de d�finir un entit� sur la carte
 *
 */
class Entity
{
    public:
        Entity();
        /**
         * Cr�e une entit�
         * @param position de l'entit�
         */
        Entity(const sf::Vector2i position);
		virtual ~Entity();
        virtual void update(sf::RenderWindow& window) = 0;


        sf::Vector2i getPosition();
        void setPosition(const sf::Vector2i position);

    protected:
        sf::Vector2i position;
};

#endif // ENTITY_H
