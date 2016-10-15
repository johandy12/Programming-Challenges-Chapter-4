#include <iostream>

using namespace std;

int main() {
	double balance;
	double checks;
	double serviceFees;
	
	cout << "Beggining balance: $";
	cin >> balance;
	
	if  (balance < 0)
	cout << "Urgent, the account is overdrawn" << endl;
	 
	cout << "Number of checks: ";
	cin >> checks;
	
	while (checks < 0){
		cout << "Number of checks: ";
		cin >> checks;
	}
	
	if (checks >= 20 && checks <= 39)
	balance - 0.1 * checks;
	
	else if (checks >= 20 && checks <= 39)
	balance - 0.08 * checks;
		
	else if (checks >= 20 && checks <= 39)
	balance - 0.06 * checks;
		
	else if (checks >= 20 && checks <= 39)
	balance - 0.04 * checks;
	
	if (balance <= 400)
	serviceFees = balance - 15;
	
	cout << "Bank service fees for the month: $" << serviceFees;
	
	return 0;
}
