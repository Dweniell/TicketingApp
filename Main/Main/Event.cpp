#include "Event.h"
#include <string>
#include <iostream>
using namespace std;
Event::Event() {
	name =nullptr;
	month = 1;
	day = 1;
	hour = 1;
	minute = 1;


}

Event::Event(const char* name, int month, int day, int hour, int minute)
{
	this->name = new char [strlen(name) + 1];
	strcpy_s(this->name, strlen(name)+1, name);
	this->month = month;
	this->day = day;
	this->hour = hour;
	this->minute = minute;

}

char* Event::getEventname() {

	return this->name;
}

int Event::getEventmonth()
{
	return this->month;
}

int Event::getEventday()
{
	return this->day;
}

int Event::getEventhour()
{
	return this->hour;
}

int Event::getEventminute()
{
	return this->minute;
}


void Event::setEventname(char* Name)
{
	this->name = Name;


}

void Event::setEventmonth(int month)
{
	this->month = month;



}

void Event::setEventday(int Day)
{
	this->day = Day;

}

void Event::setEventhour(int Hour)
{
	this->hour = Hour;
}

void Event::setEventminute(int Minute)
{
	this->minute = Minute;
}


