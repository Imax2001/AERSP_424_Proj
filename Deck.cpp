#include "Deck.h"
#include <vector>
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

void Deck::shuffle() {
	vector<int> card_is;
	queue<int> temp_q;

	srand(time(NULL));
	for (int i = 1; i <= 12; i++) {
		int rand_i = rand() % card_is.size() + 1;
		cout << rand_i << endl;
	}
}