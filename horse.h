#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS
#include <string>

class Horse {
	private:
		int position;
		int id;
		int trackLength;	
	public:
		Horse();
		void advance();
		void printLane();
		bool isWinner();
}; //end class def


#endif
