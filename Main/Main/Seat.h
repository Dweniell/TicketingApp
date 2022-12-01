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
	
	int getSeatNumber();
	int getSeatAvb();
	void setSeatAvb(int avb);
	void setSeatnumber(int number);

	Seat operator=(Seat const &s);
  
	friend ostream& operator<<(ostream& os, Seat& s)
	{
		os << s.getSeatAvb();
		return os;
	};
	

};