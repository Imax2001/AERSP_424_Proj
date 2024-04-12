#include "Character.h"
#include "Deck.h"

using namespace std;

Character::Character(int hp, int deck_size) : deck(deck_size) {
	this->hp = hp;
}

int Character::get_hp() { return this->hp; }

int Character::get_block() { return this->block; }

void Character::take_damage(int damage) {
	if (this->weakened) {				// use bitwise operators to determine if damage is even or odd
		if (damage >> 1 << 1 == damage) // if damage is even, 'weakened' cuts damage in half
			damage = damage / 2;
		else {
			damage = (damage + 1) / 2; // if damage is odd, it is rounded up
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