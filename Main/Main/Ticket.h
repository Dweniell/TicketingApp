#pragma once
#include "Event.h"
#include "Room.h"
#include "Seat.h"

class Ticket {
private:

	const int id;
	Event ev;
	Seat s;
	Room room;
	static int NrTickets;



public:

	Ticket() ;
	Ticket(int nrseat, Event event, Seat seat, Room room1) ;
	static int getNrTickets() {
		
			return NrTickets;
		
	};
	
	Event getEvent();
	Seat getSeat();
	Room getRoom();
	void setEvent(Event &a);
	void setRoom(Room &a);
	void setSeat(Seat &s);
	char* getEventNames();
	friend ostream& operator<<(ostream& s, Ticket& a) {
		s << "Location name: " << a.getEventNames();


		return s;
	}
	friend istream& operator>>(istream& s, Ticket& b) {

		std::cout <<"Change the ticket's seat";
		s >>b.s;
		return s;
	}


};
