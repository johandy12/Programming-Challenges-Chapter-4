#include <iostream>

using namespace std;

int main() {
	double BMI;
	double weight;
	double height;
	
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	cout << "Enter your height in inches: ";
	cin >> height;
	
	BMI= weight * 703 / (height * height);
	
	if (BMI < 18.5) {
		cout << "You are underweight" << endl;
	}
	
	else if (BMI > 25) {
		cout << "You are overweight" << endl;
	}
	
	else if (BMI >= 18.5 && BMI <= 25) {
		cout << "Your weight is optimal" << endl;
	}
	
	return 0;
}
