#include<iostream>
using namespace std;
int main() {
	int months;
	cout << "1 JANUARY\n";
	cout << "2 FEBRUARY\n";
	cout << "3 MARCH\n";
	cout << "4 APRIL\n";
	cout << "5 MAY\n";
	cout << "6 JUNE\n";
	cout << "7 JULY\n";
	cout << "8 AUGUST\n";
	cout << "9 SEPTEMBER\n";
	cout << "10 OCTOBER\n";
	cout << "11 NOVEMBER\n";
	cout << "12 DECEMBER\n";
	cout << "SELECT ONE NUMBER ";
	cin >> months;
	switch (months) {
	case 1:
		cout << " JANUARY " " WINTER ";
		break;
	case 2:
		cout << " FEBRUARY " " WINTER ";
		break;
	case 3:
		cout << " MARCH " " WINTER ";
		break;
	case 4:
		cout << " APRIL " " SUMMER ";
		break;
	case 5:
		cout << " MAY " " SUMMER ";
		break;
	case 6:
		cout << "JUNE " " SUMMER ";
		break;
	case 7:
		cout << "JULY " " SUMMER ";
		break;
	case 8:
		cout << " AUGUST " " SUMMER ";
		break;
	case 9:
		cout << " SEPTEMBER " " AUTUM ";
		break;
	case 10:
		cout << " OCTOBER " " SPRING ";
		break;
	case 11:
		cout << " NOVEMBER " " SPRING  ";
		break;
	case 12:
		cout << " DECEMBER " " WINTER ";
		break;
	default:
		cout << "INVAILID MONTH";
		break;

	}








	return 0;
}