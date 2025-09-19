#ifndef RACE_H_EXISTS
#define HORSE_H_EXISTS
#include <string>
#include "horse.h"

class Race {
	public:
		int NUM_HORSES = 5;
		int TRACK_LENGTH = 15;
		Horse horses[NUM_HORSES];
	private:
		Race();
		void start();
}; // end class def

#endif
