#include <ctime>

class Events {
private:
	char* name;
	std::time_t dateTime;


public:
	Events() {};
	Events(char* name, time_t dateTime);
	time_t getEventTime();


};