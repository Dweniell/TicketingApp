#pragma once
class Location {
private:
	char* LocName;
	const int nrSeats; //the maximum amount of seats the location can have which cannot be changed
	int nrRows;
	int seats_rows = nrSeats / nrRows;
	int normal_seats;
	int vip_seats;
	
public:
	
	Location();
	Location(char* name, int seats, int rows, int normal, int vip) :nrSeats(seats) {};
	
//getters
	int getnormalSeats();
	int getvipSeats();
	const int getNrSeats();
	char* getName();
/////////
//setters
	void setName(char* name);


////////
	int availableSeats();
	void Purchaseseats(int seats, char* type);
	~Location(); //destructor
};