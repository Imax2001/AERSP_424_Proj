#include "Player.h"
#include <time.h>
#include <iostream>
#include <string>
#include "Cards.h"
using namespace std;


Player::Player(int hp) {
	weakened = 0;
	this->hp = hp;
	draw = 5;
	energy = 3;
	deck_size = 10;
	block = 0; 
	for (int i = 1; i <= 4; i++) {
		card_list[i] = "Strike";
	}
	for (int i = 5; i <= 10; i++) {
		card_list[i] = "Defend";
	}

}

int Player::get_hp() { return this->hp; }

int Player::get_block() { return this->block; }

void Player::shuffle() {
	vector<int> card_is = { 1 };

	srand(time(NULL));
	for (int i = 2; i <= this->deck_size; i++) {
		int rand_i = rand() % i;
		card_is.emplace(card_is.begin() + rand_i, i);
	}

	for (auto i = card_is.begin(); i != card_is.end(); ++i)
		this->deck_order.push(*i);
}

int Player::draw_card() {
	int card_id = this->deck_order.front();
	this->deck_order.pop();
	return card_id;
}

void Player::draw_hand() {
	for (int i = 1; i <= this->draw; i++) {
		if (deck_order.empty()) {
			this->shuffle();
		}
		this->hand.push_back(this->draw_card());
	}
}


void Player::take_damage(int damage) {
	if (this->weakened) {
		if (damage >> 1 << 1 == damage)
			damage = damage / 2;
		else {
			damage = (damage + 1) / 2;
		}
	}
	this->hp -= damage;
}


void Player::increase_block(int block) {
	this->block += block;
}

vector<int> Player::get_hand() { return this->hand; }

void Player::print_hand() {
	int n = 1;
	for (auto i = hand.begin(); i != hand.end(); ++i) {
		cout << n << ": " << card_list[*i] << endl;
		n++;
	}
}

void Player::discard_hand() {
	hand.clear();
}

string Player::get_card(int card_num) {
	return card_list[hand.at(card_num - 1)];
}

int Player::get_energy() { return this->energy; }

void Player::play_card() { this->energy -= 1; }

void Player::refill_energy() { this->energy = 3; }