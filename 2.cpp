#include <iostream>

using namespace std;

int main() {
	int number;
	
	cout << "Enter a number within range 1-10: ";
	cin >> number;
	
	while (number <1 || number > 10) {
	cout << "The number is not valid." << endl;
	cout << "Enter a number within range 1-10: ";
	cin >> number;}
	
	switch (number) {
		case  1:
		cout << "I";
		break;
		
		case 2:
		cout << "II";
		break;
		
		case 3:
		cout << "III";
		break;
		
		case 4:
		cout << "II";
		break;	
		
		case 5:
		cout << "V";
		break;
		
		case 6:
		cout << "VI";
		break;
		
		case 7:
		cout << "VII";
		break;
		
		case 8:
		cout << "VIII";
		break;
		
		case 9:
		cout << "XI";
		break;
		
		case 10:
		cout << "X";
	}
	
	return 0;
}
