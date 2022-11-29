#pragma once
class Location {
private:
	char* LocName;
	int nrRows;
	int normal_seats;
	int vip_seats;
	
public:
	
	Location();
	Location(char* name, int normal, int vip);
	
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