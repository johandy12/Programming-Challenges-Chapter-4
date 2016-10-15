#include <iostream>

using namespace std;

int main() {
	double rectangle1;
	double rectangle2;
	double length1;
	double width1;
	double length2;
	double width2;
	
	cout << "Enter the length of rectangle 1: ";
	cin >> length1;
	 
	cout << "Enter the width of rectangle 1: ";
	cin >> width1;
	 
	cout << "Enter the length of rectangle 2: ";
	cin >> length2;
	 
	cout << "Enter the width of rectangle 2: ";
	cin >> width2;
	
	rectangle1= length1 * width1;
	rectangle2= length2 * width2;
	
	cout << "Area of rectangle 1: " << rectangle1 << endl;
	
	cout << "Area of rectangle 2: " << rectangle2 << endl;
	
	if (rectangle1 > rectangle2) {
	 	cout << "rectangle 1 has the greater area." << endl;
	}

	else if (rectangle1 < rectangle2) {
	 	cout << "rectangle 2 has the greater area." << endl;
	}
	
	else cout << rectangle1 << " is even with " << rectangle2;
	
	return 0;
}
