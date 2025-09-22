#ifndef RACE_H_EXISTS
#define HORSE_H_EXISTS
#include <string>
#include "horse.h"

class Race {
	private:
		const static int NUM_HORSES = 5;
		int TRACK_LENGTH;
		int index;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
}; // end class def

#endif
