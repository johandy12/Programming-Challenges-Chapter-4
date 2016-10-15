#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	unsigned number = time(0);
	srand (number);
	int number1;
	int number2;
	int total;
	int answer;
	
	number1 = (rand()%(1000 - 1 + 1)) + 1;
	number2 = (rand()%(1000 - 1 + 1)) + 1;
	
	cout << number1 << endl;
	cout << number2 << endl;
	cout << "____+" << endl;
	
	total = number1 + number2;
	
	cin >> answer;
	
	if (answer == total)
	cout << "correct answer";
	
	else cout << "incorrect answer";
	
	return 0;
}
