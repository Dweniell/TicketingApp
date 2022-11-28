#include "Location.h"
#include<string>
Location::Location():nrSeats(1){
	this->LocName = nullptr;
	this->nrRows=1;
	this->normal_seats = 1;
	this->vip_seats = 1;

}
Location::Location(char* name, int seats, int rows, int normal, int vip) :nrSeats(seats){
	this->LocName = new char[strlen(name) + 1];
	strcpy_s(this->LocName, strlen(name) + 1, name);
	this->nrRows = rows;
	this->normal_seats = normal;
	this->vip_seats = vip;

};


//getters & setters
int Location::getnormalSeats() {
	return this->normal_seats;
}
int Location::getvipSeats() {
	return this->vip_seats;
}
const int Location::getNrSeats() {
	return this->nrSeats;
}
char* Location::getName() {
	return this->LocName;
}



void Location::setName(char* name) {
	if (this->LocName!=nullptr) {
		delete[] this->LocName;
		this->LocName=nullptr;
	}
	this->LocName = new char[strlen(name) + 1];
	strcpy_s(this->LocName, strlen(name) + 1, name);

}



//////
int Location::availableSeats() {

	return this->normal_seats + this->vip_seats;

}

void Location::Purchaseseats(int seats,char* type) {
	
	if (seats > this->nrSeats || seats > availableSeats()) {
		//implement error later
		
	}
	
	if (strcmp(type, "normal")==0 || strcmp(type, "NORMAL")==0) {

	this->normal_seats-=seats;

	}
	


}




Location::~Location() {
	
	if (this->LocName != nullptr) {
		delete[] LocName;
		this->LocName = nullptr;
	}

};


int main() {



	return 0;
}