#pragma once

#include <string>

using namespace std;


class Card {
protected:
	int id;
	int cost;
	string name;
public:
	Card(int);
	void set_id(int);
	int get_id();
	int get_cost();
	string get_name();
	virtual void play_card();
};