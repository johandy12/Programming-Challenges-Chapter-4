#include <iostream>

using namespace std;

int main() {
	int number1;
	int number2;
	
	cout << "Enter a number: ";
	cin >> number1;
	 
	cout << "Enter a number: ";
	cin >> number2;
	 
	if (number1 > number2) {
	 	cout << number1 << " is bigger" << endl;
		cout << number2 << " is smaller" << endl;
	}

	else if (number1 < number2) {
	 	cout << number2 << " is bigger" << endl;
		cout << number1 << " is smaller" << endl;
	}
	
	else cout << number1 << " is even with " << number2;
	
	return 0;
}
