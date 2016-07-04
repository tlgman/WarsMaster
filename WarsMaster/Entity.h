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
		sf::Vector2i getPosition() const;
		void setPosition(const sf::Vector2i position);
		/**
		 * Retourne l'apparence de l'entit�
		 * @return Liste d'�l�ments repr�sentant graphiquement l'entit�
		 */
		std::vector<sf::Drawable*> getAppearance() const;
		/**
		 * Modifie l'apparence de l'entit�
		 * @param appearance liste d'�l�mentents "dessinables" repr�sentants l'entit�
		 */
		void setAppearance(std::vector<sf::Drawable*> appearance);

    protected:
        sf::Vector2i position;
		/**
		 * Liste des �l�ments graphiques repr�sentants l'apparence de l'entit�
		 */
		std::vector<sf::Drawable*> appearance;
};

#endif // ENTITY_H
