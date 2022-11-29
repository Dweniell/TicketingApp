#include "Room.h"
#include <string>
#include <iostream>
using namespace std;
Room::Room() {
	this->roomId = 1;
	this->roomName = nullptr;
	this->Seats = nullptr;
	this->Vip = false;


}



Room::Room(int roomID, char* name, bool vip, int nrRows, int nrCols) {


	this->roomId = roomID;
	this->roomName = new char[strlen(name)+1];
	strcpy_s(this->roomName, strlen(name) + 1, name);
	this->Seats = new Seat **[nrRows];

	for (int a = 0; a < nrRows; a++) {
		this->Seats[a] = new Seat * [nrRows];

	}
	for (int i = 0; i < nrRows; i++) {

		for (int j = 0; j < nrCols; j++) {
			this->Seats[i][j] = 0;
		}

	}
	this->Vip = vip;



}

void Room::printRoom(Room s) {
	for (int i = 0; i < sizeof(s.Seats); i++) {
		for (int j = 0; j < sizeof(s.Seats); j++) {
			cout << s.Seats[i][j] << " ";
		}

	}
}




int main() {

	Room a(5,"roomA",false,5,5);
	


}