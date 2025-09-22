#include <string>
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	// initialize all the horses
	for (int i = 0; i < NUM_HORSES; i++){
		horses[i].init();
	} // end for
	
} 


void Race::start(){
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
