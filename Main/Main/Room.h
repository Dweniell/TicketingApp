#pragma once
#include "Seat.h"
#include "Event.h"
#include <iostream>
using namespace std;
class Room {
private:
	int roomId;
	char* roomName;
	Seat*** Seats;
	bool Vip;
	int rows;
	int cols;
	Event event;
public:
	
	Room();
	Room(int roomID, const char* name, bool vip, int nrRows, int nrCols,Event &event);
	void printRoom();



	int getroomId();
	char* getRoomName();
	bool getvipStatus();
	Seat*** getSeats();
	int getrows();
	int getcols();
	

	void setroomId(int roomId);
	void setRoomName(char* roomname);
	void setVipStatus(bool v);
	void setSeats(Seat*** seats);
	void setrows(int rowss);
	void setcols(int colss);


	friend ostream& operator<<(ostream& s,Room& a) {
		s << "The room "<<a.roomName <<" id is " << a.roomId<<"\n";
		s << "It has " << a.cols * a.rows << " no of seats "<<"\n";
		s << "And this is the current status of the room " << "\n";
		a.printRoom();

		return s;
	}

	friend istream& operator >>(istream& s, Room& a) {
		std::cout << "Roomid,RoomName,Vipstatus";
		s >> a.roomId >> a.roomName >> a.Vip;
			return s;
	}
};

