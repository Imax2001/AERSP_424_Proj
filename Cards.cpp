#include "Cards.h"

void strike(Enemy* target) {
	target->take_damage(6);
}


void defend(Player* target) {
	target->increase_block(5);
}

void attack(Player* target) {
	target->take_damage(7);
}

void weaken(Player* target) {
	target->weakened = 1;
}