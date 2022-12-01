#include "Location.h"
#include<string>
Location::Location() {
	this->LocName = nullptr;
	

}
Location::Location(char* name, int Rooms, int viprooms, Room* roomy)
{

}



//getters & setters

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

void Location::Purchaseseats(int seats,char* type) {
	
	


}
