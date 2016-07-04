#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <SFML/Graphics.hpp>
#include "LivingEntity.h"

class Player
{
    public:
        Player(LivingEntity& entity);
		bool move(int x, int y);
		friend LivingEntity;

	private:
		LivingEntity* entity;
		
};

#endif // PLAYER_H
