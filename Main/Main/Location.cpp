#include "Location.h"
#include<string>
Location::Location() {
	this->LocName = nullptr;
	this->rooms = nullptr;
	this->events = nullptr;
	nrRooms = 0;
	nrEvents = 0;
}
Location::Location(const char* name, Room** rooms,int numeroRooms,Event** events,int numeroEvents)
{
	this->LocName = new char[strlen(name) + 1];
	strcpy_s(this->LocName, strlen(name) + 1, name);
	this->rooms = new Room*[numeroRooms];
	for (int i = 0; i < numeroRooms; i++) {
		this->rooms[i] = rooms[i];
	}

	this->events = new Event * [numeroEvents];
	for (int i = 0; i < numeroEvents; i++) {
		this->events[i] = events[i];
	}
	this->nrRooms = numeroRooms;
	this->nrEvents = numeroEvents;

}





//getters & setters

char* Location::getName() {


	return this->LocName;
}

Room** Location::getRooms()
{
	return this->rooms;
}


Event** Location::getEvents()
{
	return this->events;
}



void Location::setName(char* name) {
	if (this->LocName!=nullptr) {
		delete[] this->LocName;
		this->LocName=nullptr;
	}
	this->LocName = new char[strlen(name) + 1];
	strcpy_s(this->LocName, strlen(name) + 1, name);

}

void Location::setRooms(Room** rooms,int numeroRooms)
{
	this->rooms = new Room * [numeroRooms];
	for (int i = 0; i < numeroRooms; i++) {
		this->rooms[i] = rooms[i];


	}
}

void Location::setEvents(Event** event,int numeroEvents)
{
	if (event != nullptr) {
		this->events = new Event * [numeroEvents];
		for (int i = 0; i < numeroEvents; i++) {
			this->events[i] = event[i];


		}
	}
}

void Location::addroom(Room* room,int numeroRooms)
{
	Room**temp = new Room*[numeroRooms + 1];
	for (int i = 0; i < numeroRooms; i++) {
		temp[i] = rooms[i];

	}
	temp[numeroRooms] = room;
	delete[] rooms;
	nrRooms++;
	rooms = temp;
	temp= nullptr;

}


void Location::printRooms() {
	for (int i = 0; i < nrRooms; i++) {
		std::cout << *rooms[i]<< "\n";

	}

}
void Location::printEvents()
{
	for (int i = 0; i < nrEvents; i++) {
		std::cout <<*events[i]<< "\n";
	}
}
void Location::removeRoom(int position)
{

}
