#include<iostream>
#include<string>
using namespace std;

class weapon {
public:
	virtual void load() = 0;
	void print() {
		cout << "¹«±â°¡ ¼³Ä¡µÊ" << endl;
	}
};

class Bomb :public weapon {
public:
	virtual void load() = 1;
	void print() {
		cout << "ÆøÅºÀÌ ¼³Ä¡µÊ" << endl;
	}
};

class Gun :public weapon {
public:
	virtual void load() = 2;
	void print() {
		cout << "ÃÑÀÌ ¼³Ä¡µÊ" << endl;
	}
};

int main() {
	weapon* w = new weapon;
	weapon* b = new Bomb;
	weapon* g = new Gun;

	w->print();
	b->print();
	g->print();

	return 0;
}