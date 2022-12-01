#include "Ticket.h"

Ticket::Ticket() {
	nrSeats = 0;


}

Ticket::Ticket(int nrseat, Event event, Seat seats, Room room1)
{
	this->nrSeats = nrseat;
	this->ev = event;
	this->s = seats;
	this->room = room1;


}


