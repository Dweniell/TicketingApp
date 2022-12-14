#pragma once
#include <iostream>
using namespace std;
class Event {
private:
	char* name;
	int month, day, hour, minute;
	

public:
	Event();
	Event(const char* name, int month, int day, int hour, int minute);
	//get
	char* getEventname();
	int getEventmonth();
	int getEventday();
	int getEventhour();
	int getEventminute();

	//set
	void setEventname(char* name);
	void setEventmonth(int Month);
	void setEventday(int Day);
	void setEventhour(int Hour);
	void setEventminute(int Minute);



	friend ostream& operator<<(ostream& s, Event& a) {
		s << "Event name: " << a.name<<"\n";
		s << "Event date: " << a.month << "." << a.day << " " << a.hour << ":" << a.minute;

		return s;
	}
	friend istream& operator>>(istream& s, Event& b) {

		std::cout << "Change the Event name and date: ";

		s >> b.name >> b.month >> b.day >> b.hour >> b.minute;
		
		return s;
	}



};