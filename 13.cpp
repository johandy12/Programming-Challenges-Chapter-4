#include <iostream>

using namespace std;

int main() {
	int purchased;
	
	cout << "How many books did you purchased this month? ";
	cin >> purchased;
	
	if (purchased == 0) {
		cout << "You got 0 points";
	}
	
	else if (purchased == 1) {
		cout << "You got 5 points";
	}
	
	else if (purchased == 2) {
		cout << "You got 15 points";
	}
	
	else if (purchased == 3) {
		cout << "You got 30 points";
	}
	
	else if (purchased >= 4) {
		cout << "You got 60 points";
	}
	
	return 0;
}
