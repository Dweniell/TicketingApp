#include "Events.h"
#include <string>


using namespace std;
Events::Events() {
	this->name = nullptr;
	this->dateTime = time(NULL);

};
Events::Events(char* name, time_t dateTime) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->dateTime = dateTime;

}
time_t Events::getEventTime()
{

	return time_t(this->dateTime);

}

void main() {




}