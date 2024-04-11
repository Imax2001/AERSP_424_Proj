#include "Deck.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <queue>
using namespace std;

void Deck::shuffle() {
	vector<int> card_is = { 1 };

	srand(time(NULL));
	for (int i = 2; i <= this->size; i++) {
		int rand_i = rand() % i ;
		card_is.emplace(card_is.begin()+rand_i, i);
	}

	for (auto i = card_is.begin(); i != card_is.end(); ++i)
		this->deck_order.push(*i);
}

int Deck::draw_card() {
	int card_id = this->deck_order.front();
	this->deck_order.pop();
	return card_id;
}

queue<int> Deck :: get_deck_order() {
	return this->deck_order;
}