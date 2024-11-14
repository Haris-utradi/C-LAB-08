#include<iostream>
using namespace std;
int main() {
	int lights;
	cout << "1 LIGHT IS GREEN" << endl;
	cout << "2 LIGHT IS RED" << endl;
	cout << "3 LIGHT IS YELLOW" << endl;
	cout << "ENTER THE INPUT NUMBER IS :" << endl;
	cin >> lights;
	switch (lights)
	{
	case 1:
		cout << "LIGHT IS GREEN GO";
		break;
	case 2:
		cout << "LIGHT IS RED STOP";
		break;
	case 3:
		cout << "LIGHT IS YELLOW SLOW DOWN";
		break;
	default:
		cout << "INVAILID LIGHT";
		break;
	}
	return 0;
}