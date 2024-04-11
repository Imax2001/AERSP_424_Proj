#pragma once
#include "Deck.h"
#include <vector>

class Player {
private:
	int hp;
	int energy;
	int block;
	bool weak = 0;
	bool fragile = 0;
	vector <int> hand;
	Deck deck;
};