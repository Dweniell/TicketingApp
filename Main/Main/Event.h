#pragma once
class Event {
private:
	char* name;
	int month, day, hour, minute;


public:
	Event();
	Event(char* name, int month, int day, int hour, int minute);
	char* getEventname();
	int getEventmonth();
	int getEventday();
	int getEventhour();
	int getEventminute();


	void setEventname(char* name);
	void setEventmonth(int Month);
	void setEventday(int Day);
	void setEventhour(int Hour);
	void setEventminute(int Minute);





};