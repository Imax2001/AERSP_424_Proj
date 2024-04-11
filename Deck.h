#pragma once
#include "Card.h"
#include <queue>

using namespace std;

class Deck {
private:
	queue<int> deck_order;

public:
	void shuffle();
	void draw_card();
	queue<int> get_deck_order();

};