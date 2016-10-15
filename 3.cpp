#include <iostream>

using namespace std;

int main() {
	int date;
	int month;
	int year;
	
	cout << "Enter a day: ";
	cin >> date;
	
	while (date > 31) {
	cout << "Invalid day.\n" << "Enter a day: ";
	cin >> date;
	}
	
	cout << "Enter a month: ";
	cin >> month;	
	
	while (month >12) {
	cout << "Invalid month.\n" << "Enter a month: ";
	cin >> month;
	}
	
	cout << "Enter a year(2 last digit): ";
	cin >> year;
	
	while (year >=100) {
	cout << "Enter a year(2 last digit): ";
	cin >> year; 
	}
	
	cout << date << "/" << month << "/" << year << endl;
	
	if (year== month * date)
		cout << "The date is magic";
	else 
		cout << "The date is not magic";
		
	return 0;
}
