#include "Deck.h"
#include "Cards.h"
#include <time.h>
#include <iostream>
using namespace std;

Deck::Deck(int size) {
	this->deck_size = size;
	this->shuffle();
}

void Deck::shuffle() {
	vector<int> card_is = { 1 };
	cout << "Shuffling Deck..." << endl;
	srand(time(NULL));
	for (int i = 2; i <= this->deck_size; i++) {
		int rand_i = rand() % i;
		card_is.emplace(card_is.begin() + rand_i, i);
	}

	for (auto i = card_is.begin(); i != card_is.end(); ++i)
		this->deck_order.push(*i);
}

int Deck::draw_card() {
	int card_id = this->deck_order.front();
	this->deck_order.pop();
	return card_id;
}