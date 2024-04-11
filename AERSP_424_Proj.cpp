#include "AERSP_424_Proj.h"
#include "Player.h"
#include "Enemy.h"
#include "Strike.h"
#include <iostream>
using namespace std;

int main()
{
	Player player;
	Enemy enemy;
	Enemy* ep = &enemy;

	player.deck.cards["strike"](ep);
	

	return 0;
}
