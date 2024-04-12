#pragma once
#include"Deck.h"
#include <vector>
#include <queue>
#include <map>
#include <string>
using namespace std;


class Character {
protected:
	int hp;
	int block;
	int deck_size;
	map <int, string> card_list;
	Deck deck;
public:
	Character(int, int);
	bool weakened;
	void take_damage(int);
	void increase_block(int);
	void clear_block();
	int get_hp();
	int get_block();
};