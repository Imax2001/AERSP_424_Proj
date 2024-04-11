#include "Card.h"

using namespace std;

Card::Card(int id) {
	this->id = id;
}
int Card::get_cost() { return this->cost; }

string Card::get_name() { return this->name; }

int Card::get_id() { return this->id; }

void Card::set_id(int id) { this->id = id; }

