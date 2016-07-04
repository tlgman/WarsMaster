#include "Player.h"

using namespace std;

Player::Player(LivingEntity& entity) {
	this->entity = &entity;
}

bool Player::move(int x, int y) {
	return true;
}

