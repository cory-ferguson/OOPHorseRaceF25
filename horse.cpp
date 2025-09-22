#include <string>
#include <iostream>
#include "horse.h"

Horse::Horse(){
	int position = 0;
	int trackLength = 15;
}

void Horse::init(int index, int trackLength){
	Horse::index = index;
	Horse::trackLength = trackLength;
}// end init

void Horse::advance(){
	int coin = rand() %2;
	position += coin;
}// end advance

void Horse::printLane(){
	for(int i = 0; i < trackLength; i++){
		if (i == position){
			std::cout << index;
		} else {
			std::cout << ".";
		}// end if
	}// end for
}// end printLane

bool Horse::isWinner(){
	bool result = false;
	if(position >= trackLength){
		result = true;
	}// end if
	return result; 
}// end isWinner
