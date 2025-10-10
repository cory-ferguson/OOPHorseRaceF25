#ifndef RACE_H_EXISTS
#define RACE_H
#include <string>
#include <iostream>
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
