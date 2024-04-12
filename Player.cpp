#include "Player.h"
#include <time.h>
#include <iostream>
#include <string>
#include "Cards.h"
#include "Character.h"
using namespace std;


Player::Player(int hp) : Character(hp, 10){
	weakened = 0;
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


void Player::shuffle_deck() {
	this->deck.shuffle();
}


void Player::draw_hand() {
	for (int i = 1; i <= this->draw; i++) {
		if (this->deck.deck_order.empty()) {
			this->deck.shuffle();
		}
		this->hand.push_back(this->deck.draw_card());
	}
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

void Player::discard_card(int hand_i) {
	hand.erase(hand.begin()+hand_i-1);
}

string Player::get_card(int card_num) {
	return card_list[hand.at(card_num - 1)];
}

int Player::get_energy() { return this->energy; }

void Player::play_card() { this->energy -= 1; }

void Player::refill_energy() { this->energy = 3; }