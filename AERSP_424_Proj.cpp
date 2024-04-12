#include "AERSP_424_Proj.h"
#include "Player.h"
#include "Enemy.h"
#include "Cards.h"
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
	Enemy enemy(32);
	Enemy* ep = &enemy;
	Player player(100);
	Player* pp = &player;
	int card, target;
	player.shuffle();
	while (enemy.get_hp() > 0) {
		player.refill_energy();
		player.discard_hand();
		enemy.calc_intent();
		cout << "The enemy intends to " << enemy.get_intent() << endl;
		player.draw_hand();
		while (player.get_energy() > 0) {
			cout << "Enemy hp: " << enemy.get_hp() << "\t Player hp: " << player.get_hp() << "\t Player block: " << player.get_block() << "\t Player energy: " << player.get_energy() << endl;
			cout << "Cards in Hand:  " << endl;
			player.print_hand();
			cout << "Which card would you like to play? ";
			cin >> card;
			if (player.get_card(card) == "Strike") {
				strike(ep);
			}
			else if (player.get_card(card) == "Defend") {
				defend(pp);
			}
			player.play_card();
		}

		if (enemy.get_intent() == "Attack") {
			attack(pp);
		}
		else if (enemy.get_intent() == "Weaken") {
			weaken(pp);
		}

		player.weakened = 0;
	}
	cout << "You Win!" << endl;
	

	return 0;
}
