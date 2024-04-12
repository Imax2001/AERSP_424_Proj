#include "Enemy.h"
#include "Player.h"
#include "Character.h"
#include <time.h>

Enemy::Enemy(int hp) : Character(hp, 2){
	intent = 1;
	deck_size = 2;
	block = 0;
	card_list[1] = "Attack"; //enemy doesn't have cards, but we use the card mechanic to assign them particular actions
	card_list[2] = "Weaken";
}

void Enemy::calc_intent() { //randomly choose between available actions
	srand(time(NULL));
	int rand_i = (rand() % deck_size)+1;
	this->intent = rand_i;
}

string Enemy::get_intent() {
	return card_list[intent];
}
