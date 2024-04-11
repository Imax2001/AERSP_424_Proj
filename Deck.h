#pragma once
#include "Card.h"
#include "Strike.h"
#include <queue>
#include <string>
#include <map>
template<typename T>


class Deck {
private:
	int size;
	queue<int> deck_order;


public:
	Deck();
	map<string, void(*)(T)> cards;
	void shuffle();
	int draw_card();
	queue<int> get_deck_order();


};