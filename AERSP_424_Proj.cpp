#include "AERSP_424_Proj.h"
#include "Deck.h"
#include "Strike.h"
#include <iostream>
using namespace std;

int main()
{
	Strike strike(1);
	cout << strike.get_id() << endl;

	return 0;
}
