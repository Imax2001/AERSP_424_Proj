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
	int block;
	map <char, bool> status;
	vector <int> hand;
	Deck deck;

public:
	Player();
	void draw_hand();
	vector<int> get_hand();
};