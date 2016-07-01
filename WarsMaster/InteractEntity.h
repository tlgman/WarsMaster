#ifndef INTERACTENTITY_H
#define INTERACTENTITY_H

#include "Entity.h"

/**
 * Classe dite "Ap
 *
 */
class InteractEntity : public Entity
{
    public:
        InteractEntity(sf::Vector2i pos = sf::Vector2i(0,0));

        bool isCollisable();
    private:
        bool collisable;
};

#endif // INTERACTENTITY_H
