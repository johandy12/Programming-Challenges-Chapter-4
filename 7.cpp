#include <iostream>

using namespace std;

int main() {
	int seconds;
	int minute;
	int hour;
	int day;
	
	cout << "The number of seconds: ";
	cin >> seconds;
	
	if (seconds > 60 && seconds < 3600) {
		minute = seconds / 60;
		cout << minute << " minute";
	}
	
	else if (seconds >= 3600 && seconds < 86400) {
		hour = seconds / 3600;
		cout << hour << " hour";
	}
	
		else if (seconds >= 86400) {
		day= seconds / 86400;
		cout << day << " day";
	}
}
