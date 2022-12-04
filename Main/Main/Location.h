#pragma once
#include "Room.h"
class Location {
private:
	char* LocName;
	Room** rooms;
	Event** events;
	int nrRooms,nrEvents;

public:
	
	Location();
	Location(char* name,Room** rooms,int numeroRooms,Event** events,int numeroEvents);
	
//getters
	char* getName();
	Room** getRooms();
	Event** getEvents();
/////////
//setters
	void setName(char* name);
	void setRooms(Room** rooms,int numeroRooms);
	void setEvents(Event** event,int numeroEvents);

////////
	void addroom(Room* room,int numeroRooms);
	void removeRoom(int position);
	void printRooms();


	friend ostream& operator<<(ostream& s, Location& a) {
		s << "Location name: " << a.LocName;


	}
	friend istream& operator>>(istream& s, Location& b) {

		std::cout << "Change the Location name: ";
		s >> b.LocName;
		return s;
	}
};