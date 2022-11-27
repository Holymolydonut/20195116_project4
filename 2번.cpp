#include<iostream>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time() :hours(0), minutes(0) {};
	~Time() {}

	int getValue()const {
		return hours; 
	}

	void setValue(int x) {
		hours = x;
	}

	Time& operator++() {
		++minutes;
		return *this;
	}
};