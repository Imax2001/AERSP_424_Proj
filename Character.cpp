#include "Character.h"
#include "Deck.h"

using namespace std;

Character::Character(int hp, int deck_size) : deck(deck_size) {
	this->hp = hp;
}

int Character::get_hp() { return this->hp; }

int Character::get_block() { return this->block; }

void Character::take_damage(int damage) {
	if (this->weakened) {
		if (damage >> 1 << 1 == damage)
			damage = damage / 2;
		else {
			damage = (damage + 1) / 2;
		}
	}
	this->hp -= damage;
}


void Character::increase_block(int block) {
	this->block += block;
}

void Character::clear_block() {
	this->block = 0;
}