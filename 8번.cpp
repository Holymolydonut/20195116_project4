#include<iostream>
#include<string>
using namespace std;

template <class T>
T getSmallest(T arr[], int n) {

	double a = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[i + 1]) {
			a = arr[i + 1];
		}
		else {
			a = arr[i];
		}
	}
	cout << "ÃÖ¼Ú°ª: " << a;

	return 0;
}

int main() {
	double list[] = { 1.2, 3.3, 9.0, 1.5, 8.7 };
	getSmallest(list, 5);

	return 0;
}