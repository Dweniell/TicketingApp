#include "Seat.h"
#include<iostream>

Seat::Seat() {
	this->seat_number=0;
	this->seat_availability = 0;

}
Seat::Seat(int number,int avb) {
	this->seat_number = number;
	this->seat_availability = avb;
}



int Seat::getSeatNumber() {
	return this->seat_number;

}
int Seat::getSeatAvb() {
	return this->seat_availability;

}

void Seat::setSeatAvb(int avb)
{
	this->seat_availability = avb;
}

void Seat::setSeatnumber(int number)
{
	this->seat_number = number;
}





Seat Seat::operator=(Seat const& s) {
	Seat a;
	a.seat_number = s.seat_number;
	a.seat_availability = s.seat_availability;
	return a;
};






