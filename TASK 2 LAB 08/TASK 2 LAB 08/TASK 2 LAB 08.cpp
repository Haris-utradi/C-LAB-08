#include <iostream>
using namespace std;
int main() {

    int num1;
        int num2;
    char opr;
    cout << "Enter 2 numbers you want to calculate: ";
    cin >> num1 >> num2;
    cout << "Enter an Operator i.e '+ , - , * , /': ";
    cin >> opr;

    switch (opr)
    {
    case '+':
        cout << "THE ADD VALUE IS " << num1+num2 << endl;
        break;

    case '-':
        cout << " THE SUBTRACTION VALUE IS " << num1 - num2 << endl;
        break;

    case '*':
        cout << "THE MULTIPULY VALUE IS " << num1 * num2 << endl;
        break;

    case '/':
        cout << "THE DIVISION VALUE IS " << num1 / num2 << endl;

    default:
        cout << "Invalid Operator..." << "\n" << "Enter One of the following Operator: (+ , - , * , /)";
        break;
    }

    return 0;
}