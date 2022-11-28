#include <ctime>

class Events {
private:
	char* name;
	std::time_t dateTime;


public:
	Events();
	Events(char* name, time_t dateTime);
	
//getters
	time_t getEventTime();


///////////
//setters
	
	void setName(char* name);
	void setDate(time_t date);

////

	~Events();

};