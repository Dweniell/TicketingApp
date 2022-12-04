#include "Room.h"
#include <string>
#include <iostream>
using namespace std;
Room::Room() {
	roomId = 1;
	roomName = nullptr;
	Seats = nullptr;
	Vip = false;
	rows = 2;
	cols = 2;

}



Room::Room(int roomID,const char* name, bool vip, int nrRows, int nrCols,Event& event) {


	this->roomId = roomID;
	this->roomName = new char[strlen(name)+1];
	strcpy_s(this->roomName, strlen(name) + 1, name);
	this->rows = nrRows;
	this->cols = nrCols;
	this->Seats = new Seat **[nrRows];

	for (int a = 0; a < nrRows; a++) {
		this->Seats[a] = new Seat * [nrCols];

	}
	for (int i = 0; i < nrRows; i++) {

		for (int j = 0; j < nrCols; j++) {
			Seats[i][j] = new Seat(j,0);
			
		}

	}
	this->Vip = vip;
	
	this->event = event;

}



void Room::printRoom() {

	for (int i = 0; i <this->rows ; i++) {
		for (int j = 0; j <this->cols ; j++) {
			cout<< *this->Seats[i][j] << " ";


		}
		cout << endl;
	}
}

int Room::getroomId()
{
	return this->roomId;
}

char* Room::getRoomName()
{
	return this->roomName;
}

bool Room::getvipStatus()
{
	return this->Vip;
}

Seat*** Room::getSeats()
{
	return this->Seats;
}

int Room::getrows()
{
	return this->rows;
}

int Room::getcols()
{
	return this->cols;
}

void Room::setroomId(int roomId)
{
	if (roomId != NULL) {
		this->roomId = roomId;
	}
}

void Room::setRoomName(char* roomname)
{
	if(roomname !=nullptr)
		this->roomName = roomname;
}

void Room::setVipStatus(bool v)
{
	if(v != this->Vip)
		this->Vip = v;
}

void Room::setSeats(Seat*** seats)
{
	if(seats !=nullptr)
		this->Seats = seats;
}

void Room::setrows(int rowss)
{
	if(rowss >2)
		this->rows = rowss;
	
}

void Room::setcols(int colss)
{
	if(colss >2)
		this->cols = colss;
}



