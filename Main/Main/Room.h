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
	Seat k;
	bool Vip;
	int rows;
	int cols;
	Event event;
public:
	
	Room();
	Room(int roomID, const char* name, bool vip, int nrRows, int nrCols,Event &event);
	


	//get
	int getroomId();
	char* getRoomName();
	bool getvipStatus();
	Seat*** getSeats();
	int getrows();
	int getcols();
	//set
	void setroomId(int roomId);
	void setRoomName(char* roomname);
	void setVipStatus(bool v);
	void setSeats(Seat*** seats);
	void setrows(int rowss);
	void setcols(int colss);
	Seat getSeat(int row, int col);
	void setseatavb(int row, int col, int avb);


	int getPosRow(int id);
	int getPosCol(int id);
	void printRoom();

	friend ostream& operator<<(ostream& s,Room& a) {
		s << "The room: "<<a.roomName <<" has the id of " << a.roomId<<"\n";
		s << "It has " << a.cols * a.rows << " no of seats "<<"\n";
		s << "The vip status of the room :" << a.Vip<< "\n";
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

