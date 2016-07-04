#ifndef SOLDIER_H
#define SOLDIER_H

#include "LivingEntity.h"

class Soldier : public LivingEntity
{
    public:
        Soldier(sf::Vector2i position, std::string texPath);
		~Soldier();
		void update(sf::RenderWindow& rw);
    private:
		sf::Sprite sprite;
};

#endif // SOLDIER_H
