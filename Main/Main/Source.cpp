#include <iostream>
#include "Event.h"
#include "Location.h"
#include "Room.h"
#include "Seat.h"
#include "Ticket.h"
using namespace std;
/*to do :fix the read access violations
make the ticket's seat be a pointer to the object inside the array

*/
int Ticket::NrTickets = 0;
int main() {
	Event b("Themovie", 3, 11, 15, 15);
	Event c("notMovie", 3, 11, 15, 15);

	Room a(5, "yes", false, 5, 5, b);
	Room a2(5, "no", true, 5, 5, c);

	Room** rum = new Room * [2];
	Event** events = new Event * [2];

	events[0] = new Event(b);
	events[1] = new Event(c);
	
	rum[0] =new Room(a);
	rum[1] = new Room(a2);
		
	Location le("Location1", rum,2,events,2);
	
	Ticket d(1, b,le, a);
	cout << "ROOM TEST: "<< "\n";
	cout << a<<"\n";
	cout << "EVENT TEST: " << "\n";
	cout << b << "\n";
	cout << "TICKET TEST: " << "\n";
	cout << d<< "\n";
	cout << "LOCATION TEST: " << "\n";
	cout << le<< "\n";
	
	return 0;
}