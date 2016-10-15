#include <iostream>

using namespace std;

int main() {
	int quantity;
	int units = 99;
	int total;
	
	cout << "Number of units sold: ";
	cin >> quantity;
	
	while (quantity <= 0) {
		cout << "Number of units sold: ";
		cin >> quantity;
	}
	
	if (quantity >= 10 && quantity <= 19) {
		total = quantity * units * 0.2;
		cout << "Total cost: $" << total << endl;
	}
		
	if (quantity >= 20 && quantity <= 49) {
		total = quantity * units * 0.3;
		cout << "Total cost: $" << total << endl;
	}
				
	if (quantity >= 50 && quantity <= 99) {
		total = quantity * units * 0.4;
		cout << "Total cost: $" << total << endl;
	}
	
	if (quantity >= 100) {
		total = quantity * units * 0.5;
		cout << "Total cost: $" << total << endl;
	}

	return 0;
}
