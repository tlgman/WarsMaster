#ifndef ENTITY_H
#define ENTITY_H

#include <SFML/Graphics.hpp>

/**
 * Class générale(abstraite) permettant de définir un entité sur la carte
 *
 */
class Entity
{
    public:
        Entity();
        /**
         * Crée une entité
         * @param position de l'entité
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
