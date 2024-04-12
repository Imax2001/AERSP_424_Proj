#pragma once
#include <queue>

using namespace std;

class Deck {
private:
	int deck_size;
	queue<int> deck_order;

public:
	Deck(int);
	void shuffle();
	int draw_card();
	friend class Player;
};