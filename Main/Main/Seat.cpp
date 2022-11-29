#include "Seat.h"

Seat::Seat() {
	this->seat_number=0;
	this->seat_availability = 1;

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




int main() {

	return 0;
}