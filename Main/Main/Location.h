#pragma once
#include "Room.h"
class Location {
private:
	char* LocName;
	int nrRooms;
	int nrVipRooms;
	Room** rooms;

public:
	
	Location();
	Location(char* name,int Rooms,int viprooms,Room*roomy);
	
//getters
	
	char* getName();
/////////
//setters
	void setName(char* name);


////////
	int availableSeats();
	void Purchaseseats(int seats, char* type);




};