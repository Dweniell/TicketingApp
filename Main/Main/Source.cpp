#include <iostream>
#include "Event.h"
#include "Location.h"
#include "Room.h"
#include "Seat.h"
#include "Ticket.h"
int Ticket::NrTickets = 0;
int main() {
	Event b("LEmovie", 3, 11, 15, 15);
	Room a(5,"yes",false,5,5,b);
	
	std::cout << a;
	
	return 0;
}