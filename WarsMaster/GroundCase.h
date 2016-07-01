#ifndef GROUND_H
#define GROUND_H

#include <SFML/Graphics.hpp>
#include "NeutralEntity.h"

class GroundCase : public sf::Sprite, public NeutralEntity
{
    public:
        GroundCase();
        GroundCase(const sf::Texture &texture, sf::Vector2f postition = sf::Vector2f(0,0));

};

#endif // GROUND_H
