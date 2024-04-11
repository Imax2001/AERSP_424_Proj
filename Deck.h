#pragma once
#include "Card.h"
#include <queue>

using namespace std;

class Deck {
private:
	int size;
	queue<int> deck_order;

public:
	void shuffle();
	int draw_card();
	queue<int> get_deck_order();

};