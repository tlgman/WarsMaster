#ifndef NEUTRALENTITY_H
#define NEUTRALENTITY_H

#include "Entity.h"

class NeutralEntity : public Entity
{
    public:
        NeutralEntity();
        NeutralEntity(sf::Vector2i pos);
};

#endif // NEUTRALENTITY_H
