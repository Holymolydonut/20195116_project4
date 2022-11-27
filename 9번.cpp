#include<iostream>
#include<string>
using namespace std;


template<typename T>
class Circle <T&x ,T&y,T&z> {
public:
	T a = z * z * 3.14;

	T area() {
		return a;
	}
};

int main() {
	Circle<double> circleA(0.0, 0.0, 10.0);
	cout << "¸éÀû: " << circleA.area() << endl;
	return 0;
}