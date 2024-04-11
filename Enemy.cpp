#include "Enemy.h"

void Enemy::take_damage(int damage) {
	this->hp -= damage;
}