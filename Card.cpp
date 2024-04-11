#include "Card.h"

using namespace std;

Card::Card(int id, int cost) {
	this->id = id;
	this->cost = cost;
}
int Card::get_cost() { return this->cost; }

string Card::get_name() { return this->name; }

int Card::get_id() { return this->id; }

void Card::set_id(int id) { this->id = id; }

void Card::play_card() {}