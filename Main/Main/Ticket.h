#pragma once
#include "Event.h"
#include "Room.h"
#include "Seat.h"
#include "Location.h"
class Ticket {
private:

	const int id;
	Event ev;
	Seat seat;
	Room room;
	Location loc;
	static int NrTickets;



public:

	Ticket() ;
	Ticket(int nrseat, Event event,Location locat ,Room room1) ;
	static int getNrTickets() {
		
			return NrTickets;
		
	};
	//get
	Event getEvent();
	Seat getSeat();
	Room getRoom();
	Location getLocation();
	//set
	void setEvent(Event &a);
	void setRoom(Room &a);
	void setSeat(Seat &s);
	void setLocation(Location& l);


	char* getEventNames();
	

	friend ostream& operator<<(ostream& s, Ticket& a) {
	
		s << "Event name: " << a.getEventNames()<<"\n";
		s << "Location: " << a.loc.getName() << "\n"; 
		s << "Room id " << a.room.getroomId() << "\n";
		s << "Seat: " << a.getSeat().getSeatNumber() << " row and col:" << a.room.getPosRow(a.getSeat().getSeatNumber()) << " " << a.room.getPosCol(a.getSeat().getSeatNumber()) << "\n"; //needs to be fixed
		//a.room.printRoom(); test
		return s;
	}
	friend istream& operator>>(istream& s, Ticket& b) {

		std::cout <<"Change the ticket's seat number";
		int input;
		s >> input;
		if (b.seat.getSeatAvb() == 0) {
			b.seat.setSeatnumber(input);
			b.seat.setSeatAvb(1);
		}
		else cout<< "seat is occupied";
		return s;
	}


};
