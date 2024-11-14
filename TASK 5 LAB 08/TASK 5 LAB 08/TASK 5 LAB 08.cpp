#include <iostream>
using namespace std;
int main() {
    int bank;
    cout << "1:DEPOSIT" << endl;
    cout << "2:WITHDRAWL" << endl;
    cout << "3:BALANCE" << endl;
    cout << "4:EXIT" << endl;
    cout << "SELECT ONE NUMBER :";
    cin >> bank;
    switch (bank) {
    case 1:
        cout << " DEPOSIT AMOUNT=";
        break;
    case 2:
        cout << " WITHDRAWL AMOUNT=";
        break;
    case 3:
        cout << "YOUR BALANCE IS 50000";
        break;
    case 4:
        cout << "EXITED";
        break;
    default:
        cout << "Invalid option!!";

    }
    return 0;
}