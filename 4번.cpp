#include<iostream>
using namespace std;

class Employee {
	string name;
	int salary;
public:
	Employee(string name, int salary) {
		this->name = name;
		this salary = salary;
	}
	computeSalary(int salary) {
		this salary = salary;
	}
};

class Manager : public Employee {
	int bonus;
public:
	Manager(string name, int salary, int bonus) {
		this->name = name;
		this salary = salary;
		this->bonus = bonus;
	}
};