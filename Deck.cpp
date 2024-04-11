#include "Deck.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <queue>
using namespace std;

void Deck::shuffle() {
	vector<int> card_is = { 1 };
	queue<int> temp_q;

	srand(time(NULL));
	for (int i = 2; i <= 12; i++) {
		int rand_i = rand() % i ;
		card_is.emplace(card_is.begin()+rand_i, i);
	}
	for (auto i = card_is.begin(); i != card_is.end(); ++i)
		this->deck_order.push(*i);



}

queue<int> Deck :: get_deck_order() {
	return this->deck_order;
}