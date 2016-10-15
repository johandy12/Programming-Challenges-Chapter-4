#include <iostream>

using namespace std;

int main() {
	double mass;
	double weight;
	
	cout << "Enter the object's mass in kilograms: ";
	cin >> mass;
	
	weight = mass * 9.8;
	
	cout << weight << " Newtons" << endl;
	
	if (weight < 10) {
		cout << "The object is too light" << endl;
	}
	
	else if (weight > 1000) {
		cout << "The object is too heavy" << endl;
	}
	
	return 0;
}
