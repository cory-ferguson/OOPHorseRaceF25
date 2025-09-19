#include <string>
#include <iostream>
#include "horse.h"

Horse::Horse(){
	int position;
	int id = horses[NUM_HORSES];
	int trackLength = 15;
}

void Horse::advance(){
	int coin = dist(rd);
	horses[NUM_HORSES] += coin;
}// end advance

void Horse::printLane(){
}// end printLane

bool Horse::isWinner(){
	bool result = false;
	if(horses[NUM_HORSES] == TRACK_LENGTH){
		result = true;
		std::cout << "Horse "  << horseNum << " won!" << std::endl;
	}// end if
	return result 
}// end isWinner
