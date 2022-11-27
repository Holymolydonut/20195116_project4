#include<iostream>
using namespace std;

class Box {
private:
	double length;
	double width;
	double height;
public:
	Box(int l = 0, int w = 0, int h = 0):length(l),width(w),height(h){}
	double getVolume(void) {
		return length * width * height;
	}
	friend ostream& operator<<(ostream os, const Box& v) {
		os << "(" << v.length << "," << v.width << "," << v.height << ")" << endl;
		return os;
	}
};

int main() {
	Box a(10, 10, 10), b(20, 20, 20);
.                                                                                                                                                                            




	cout << a << b;

	return 0;
}