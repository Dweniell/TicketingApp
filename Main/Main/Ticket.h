#pragma once
#include "Event.h"
#include "Room.h"
#include "Seat.h"

class Ticket {
private:
	
	int nrSeats;
	Event ev;
	Seat s;
	Room room;
	static int NrTickets;



public:
	Ticket();
	Ticket(int nrseat, Event event, Seat seats,Room room1);
	
	


};