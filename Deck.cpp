#include "Deck.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <queue>
#include "Cards.h"
#include "Enemy.h"
using namespace std;
template<typename T>
Deck<T>::Deck() { 
	size = 12; 
	cards.emplace("strike", strike);
	cards.emplace("defend", defend);
}

template<typename T>
void Deck<T>::shuffle() {
	vector<int> card_is = { 1 };

	srand(time(NULL));
	for (int i = 2; i <= this->size; i++) {
		int rand_i = rand() % i ;
		card_is.emplace(card_is.begin()+rand_i, i);
	}

	for (auto i = card_is.begin(); i != card_is.end(); ++i)
		this->deck_order.push(*i);
}

template<typename T>
int Deck<T>::draw_card() {
	int card_id = this->deck_order.front();
	this->deck_order.pop();
	return card_id;
}

template<typename T>
queue<int> Deck<T> :: get_deck_order() {
	return this->deck_order;
}

