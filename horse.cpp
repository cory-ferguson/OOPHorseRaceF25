#include <string>
#include <iostream>
#include "horse.h"

Horse::Horse(){
	int position;
	const static int NUM_HORSES = 5;
	int index = horses[NUM_HORSES];
	int trackLength = 15;
}

void init(index, trackLength){
	int index = horses[NUM_HORSES];
	int trackLength = 15;
}// end init

void Horse::advance(){
	int coin = dist(rd);
	horses[NUM_HORSES] += coin;
}// end advance

void Horse::printLane(){
}// end printLane

bool Horse::isWinner(){
	bool result = false;
	if(horses[NUM_HORSES] == trackLength){
		result = true;
		std::cout << "Horse "  << index << " won!" << std::endl;
	}// end if
	return result; 
}// end isWinner
