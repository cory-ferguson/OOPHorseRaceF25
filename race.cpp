#include <string>
#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	// initialize all the horses
	for (int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, 15);
	} // end for
	
} 


void Race::start(){
	bool keepGoing = true;

	while(keepGoing){
		for(int horseNum = 0; horseNum < NUM_HORSES; horseNum++){
			horses[horseNum].advance();
			horses[horseNum].printLane();
			if (horses[horseNum].isWinner()){
				std::cout << "Horse " << horseNum << " won!";
				keepGoing = false;
			}// end if
		}// end for
		std::cout << "Press enter for another turn.";
		std::cin.ignore();
	}// end while
}// end start
