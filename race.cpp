#include <string>
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	const static int NUM_HORSES = 5;
	const int TRACK_LENGTH = 15;
	Horse horses[NUM_HORSES]; 
} 

void start(){
	bool keepGoing = true;

	while keepGoing{
		for(int horseNum = 0; horseNum < NUM_HORSES; horseNum++){
			Horse c;
			c.advance();
			c.printLane();
			if (c.isWinner){
				keepGoing = false;
			}// end if
		}// end for
		std::cout << "Press enter for another turn.";
		std::cin.ignore();
	}// end while
}// end start
