#pragma once
#include "Seat.h"
#include "Event.h"
class Room {
private:
	int roomId;
	char* roomName;
	Seat*** Seats;
	bool Vip;
	int rows;
	int cols;
	static int viprooms;
	static int rooms;
public:
	Room();
	Room(int roomID, const char* name, bool vip, int nrRows, int nrCols);
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
	
	
};