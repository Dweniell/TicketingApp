#pragma once
#include <iostream>
using namespace std;
class Seat {
private:
	int seat_number;
	int seat_availability;
	
public:

	Seat();
	Seat(int number, int seatAvb);
	//get
	int getSeatNumber();
	int getSeatAvb();
	//set
	void setSeatAvb(int avb);
	void setSeatnumber(int number);

	Seat operator=(Seat const &s);
  
	friend ostream& operator<<(ostream& os, Seat& s)
	{
		os << s.getSeatAvb();
		return os;
	};
	friend istream& operator>>(istream& is, Seat& s) {

		std::cout << "You can change the seat to 1 or 0";
		is >> s.seat_availability;
		return is;
	}

};
