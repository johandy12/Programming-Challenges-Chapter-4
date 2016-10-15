#include <iostream>

using namespace std;

int main() {
	int month;
	int year;
	
	cout << "Enter the month: ";
	cin >> month;
		
	while (month > 12) {
		cout << "Must be 12 or lower" << endl;
		cout << "Enter the month: ";
		cin >> month;
	}
	
	cout << "Enter the year: ";
	cin >> year;
	
	if (year % 4 == 0) 
	cout << year << " is a leap year" << endl;
	
	else cout << year << " is not a leap year" << endl;
	
	if (month == 2)
	cout << "28" << endl;
	
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
	cout << "31" << endl;
	
	else cout << "30" << endl;
		
	return 0;
}
