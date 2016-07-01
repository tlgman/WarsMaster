#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>
#include "LivingEntity.h"

class Player : LivingEntity
{
    public:
        Player(sf::Vector2i position);
		

    private:
		sf::Sprite sprite;
};

#endif // PLAYER_H
