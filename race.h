#ifndef RACE_H_EXISTS
#define HORSE_H_EXISTS
#include <string>
#include "horse.h"

class Race {
	public:
		const static int NUM_HORSES;
		int TRACK_LENGTH;
		Horse horses[NUM_HORSES];
	private:
		Race();
		void start();
}; // end class def

#endif
