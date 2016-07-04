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
		sf::Vector2i getPosition() const;
		void setPosition(const sf::Vector2i position);
		/**
		 * Retourne l'apparence de l'entité
		 * @return Liste d'éléments représentant graphiquement l'entité
		 */
		std::vector<sf::Drawable*> getAppearance() const;
		/**
		 * Modifie l'apparence de l'entité
		 * @param appearance liste d'élémentents "dessinables" représentants l'entité
		 */
		void setAppearance(std::vector<sf::Drawable*> appearance);

    protected:
        sf::Vector2i position;
		/**
		 * Liste des éléments graphiques représentants l'apparence de l'entité
		 */
		std::vector<sf::Drawable*> appearance;
};

#endif // ENTITY_H
