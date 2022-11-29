#pragma once
#include "Seat.h"

class Room {
private:
	int roomId;
	char* roomName;
	Seat*** Seats;
	bool Vip;

public:
	Room();
	Room(int roomID, char* name, bool vip, int nrRows,int nrCols);
	void printRoom(Room s);
	



};