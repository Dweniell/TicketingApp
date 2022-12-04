#include "Ticket.h"

Ticket::Ticket():id(0) {
	this->ev = Event();
	this->s = Seat();
	this->room = Room();
	NrTickets++;
}

Ticket::Ticket(int nrseat, Event event, Seat seats, Room room1):id(rand())
{
	
	this->ev = event;
	this->s = seats;
	this->room = room1;

	NrTickets++;
}




Event Ticket::getEvent()
{
	return this->ev;
}

Seat Ticket::getSeat()
{
	return this->s;
}

Room Ticket::getRoom()
{
	return this->room;
}

void Ticket::setEvent(Event &a)
{
	if (a.getEventname() != nullptr)
		this->ev = a;
}

void Ticket::setRoom(Room& a)
{
	if (a.getRoomName() != nullptr)
		this->room = a;
}

void Ticket::setSeat(Seat& s)
{
	if (s.getSeatAvb() != 1)
		this->s = s;
	
}

char* Ticket::getEventNames()
{
	return this->ev.getEventname();
}


