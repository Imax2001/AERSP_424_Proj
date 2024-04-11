#pragma once

#include <string>

using namespace std;


class Card {
private:
	int cost;
	string name;
public:
	int get_cost();
	string get_name();
	virtual void play_card();
};