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
	Location(const char* name,Room** rooms,int numeroRooms,Event** events,int numeroEvents);
	
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
	void addroom(Room* room,int numeroRooms); // fix this
	void removeRoom(int position);
	void printRooms();
	void printEvents();

	friend ostream& operator<<(ostream& s, Location& a) {
		s << "Location name: " << a.LocName << "\n";
		s << "The events of this location: "<<"\n";
		a.printEvents();
		s << "\n";
		s << "The rooms of this location: " << "\n";
		a.printRooms();
		return s;
	}
	friend istream& operator>>(istream& s, Location& b) {

		std::cout << "Change the Location name: ";
		s >> b.LocName;
		return s;
	}
};