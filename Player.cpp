#include "Player.h"

Player::Player() {
	status['f'] = 0;
	status['w'] = 0;
	hp = 100;
	draw = 5;

}

void Player::draw_hand() {
	for (int i = 1; i <= this->draw; i++) {
		this->hand.push_back(this->deck.draw_card());
	}
}

vector<int> Player::get_hand() { return this->hand; }