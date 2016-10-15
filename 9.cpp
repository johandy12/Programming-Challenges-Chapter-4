#include <iostream>

using namespace std;

int main() {
	double total;
	double dollar;
	double penny;
	double nickel;
	double dime;
	double quarter;
	
	cout << "Enter the number of penny: ";
	cin >> penny;
	
	cout << "Enter the number of nickel: ";
	cin >> nickel;
	
	cout << "Enter the number of dime: ";
	cin >>dime;
	
	cout << "Enter the number of quarter: ";
	cin >> quarter;
	
	dollar= penny * 0.01;
	dollar= nickel * 0.05;
	dollar= dime * 0.1;
	dollar= quarter * 0.25;
	total= penny + nickel + dime + quarter;
	
	cout << "Total: " << total << endl;
	
	if (total< 1) {
		cout << "The amount is less than 1 dollar";
	}
	
	else if (total> 1) {
		cout << "The amount is more than 1 dollar";
	}
	
	else if (total= 1) {
		cout << "Congratulations for winning the game";
	}
	
	return 0;
}
