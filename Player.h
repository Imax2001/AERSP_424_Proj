#pragma once
#include "Character.h"
#include <vector>
#include <map>
#include <queue>
#include <string>
#include "Deck.h"
using namespace std;

class Player : public Character{
protected:
	int energy;
	int draw;
	vector <int> hand;

public:
	bool weakened;
	Player(int);
	void shuffle_deck();
	void draw_hand();
	int get_energy();
	vector<int> get_hand();
	void print_hand();
	void discard_hand();
	void discard_card(int);
	void play_card();
	void refill_energy();
	string get_card(int);
	friend class Deck;
};