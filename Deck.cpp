#include "Deck.h"
#include "Cards.h"
#include <time.h>
#include <iostream>
using namespace std;

Deck::Deck(int size) {
	this->deck_size = size;
	this->shuffle();
}

void Deck::shuffle() { //randomize deck order, by randomly inserting integers 1-deck_size into a vector, then loading them into a queue
	vector<int> card_is = { 1 };
	cout << "Shuffling Deck..." << endl;
	srand(time(NULL));
	for (int i = 2; i <= this->deck_size; i++) {
		int rand_i = rand() % i;
		card_is.emplace(card_is.begin() + rand_i, i); //place integer in a random location in vector
	}

	for (auto i = card_is.begin(); i != card_is.end(); ++i) //loop through randomized vector, loading them into a queue
		this->deck_order.push(*i);
}

int Deck::draw_card() { // pull id from top of deck, and remove it from the deck
	int card_id = this->deck_order.front();
	this->deck_order.pop();
	return card_id;
}