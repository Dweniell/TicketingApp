#include "Location.h"
#include<string>
Location::Location() {
	this->LocName = nullptr;
	this->normal_seats = NULL;
	this->vip_seats = NULL;

}
Location::Location(char* name, int normal, int vip){
	this->LocName = new char[strlen(name) + 1];
	strcpy_s(this->LocName, strlen(name) + 1, name);
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