#pragma once
#include "Deck.h"
#include <vector>
#include <map>

class Player {
private:
	int hp;
	int energy;
	int block;
	int draw;
	map <char, bool> status;
	vector <int> hand;

public:
	Player();
	Deck deck;
	void draw_hand();
	vector<int> get_hand();
};