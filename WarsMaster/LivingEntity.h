#ifndef LIVINGENTITY_H
#define LIVINGENTITY_H

#include "InteractEntity.h"

class LivingEntity : public InteractEntity
{
    public:
        LivingEntity(sf::Vector2i pos = sf::Vector2i(0,0));
        LivingEntity(sf::Vector2i pos, unsigned int maxLives);
        virtual ~LivingEntity();

        void setLives(unsigned int lives);
        void setMaxLives(unsigned int maxLives);

        unsigned int getLives();
        unsigned int getMaxLives();

        void regenerateLives(); // R�g�naire les vies de l'entit� jusqu'au maximum
    protected:
        unsigned int maxLives;
        unsigned int lives;
};

#endif // LIVINGENTITY_H
