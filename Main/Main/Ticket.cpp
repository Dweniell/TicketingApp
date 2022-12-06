#include "Ticket.h"

Ticket::Ticket():id(0) {
	this->ev = Event();
	this->seat = Seat();
	this->room = Room();
	NrTickets++;
}

Ticket::Ticket(int nrseat, Event event,Location locat ,Room room1):id(rand())
{
	
	this->ev = event;

	this->seat = room1.getSeat(room.getPosRow(nrseat),room.getPosCol(nrseat));

	//this->room.setseatavb(room.getPosRow(nrseat), room.getPosCol(nrseat), 1);
	this->room = room1;
	this->loc = locat;
	NrTickets++;
}




Event Ticket::getEvent()
{
	return this->ev;
}

Seat Ticket::getSeat()
{
	return this->seat;
}

Room Ticket::getRoom()
{
	return this->room;
}

Location Ticket::getLocation()
{
	return this->loc;
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
		this->seat = s;
	
}

void Ticket::setLocation(Location& l)
{
	this->loc = l;
}

char* Ticket::getEventNames()
{
	return this->ev.getEventname();
}


