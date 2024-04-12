#pragma once
#include "Player.h"
#include <map>
#include <string>
using namespace std;

class Enemy : public Player{
private:
	int intent;
public:
	Enemy(int);
	void calc_intent();
	string get_intent();

};