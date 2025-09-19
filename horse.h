#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
#include <string>

class Horse {
	private:
		int position;
		int index;
		int trackLength;	
	public:
		Horse();
		void init(index, trackLength);
		void advance();
		void printLane();
		bool isWinner();
}; //end class def


#endif
