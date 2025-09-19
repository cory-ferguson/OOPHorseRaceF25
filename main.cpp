#include <iostream>
#include "horse.h"
#include "race.h"

int main(){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	Race c;
	c.start();
	return 0;
}// end main
