#pragma once
#include <string>
#include "Card.h"

using namespace std;

class Strike : public Card {
public:
	Strike(int);
	void play_card(int);
};