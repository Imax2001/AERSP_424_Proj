#pragma once
#include <vector>
#include <map>
#include <queue>
#include <string>
using namespace std;

class Player {
protected:
	int hp;
	int energy;
	int block;
	int draw;
	vector <int> hand;
	int deck_size;
	queue<int> deck_order;
	map <int, string> card_list;

public:
	bool weakened;
	Player(int);
	void shuffle();
	int draw_card();
	void take_damage(int);
	void take_weak();
	void increase_block(int);
	void draw_hand();
	int get_hp();
	int get_energy();
	int get_block();
	vector<int> get_hand();
	void print_hand();
	void discard_hand();
	void play_card();
	void refill_energy();
	string get_card(int);
};