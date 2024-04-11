#include "Strike.h"

using namespace std;

Strike::Strike(int id) : Card(id) {
	this->id = id;
	cost = 1;
	name = "Strike";
}

void Strike::play_card(int target) {
	
}