#include <iostream>
using namespace std;
int main() {

    char alph;
    cout << "Enter any Vowel (Aa, Ee, Ii, Oo, Uu): ";
    cin >> alph;

    switch (alph)
    {
    case 'A':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'a':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'E':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'e':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'I':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'i':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'O':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'o':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'U':
        cout << alph << " is a Vowel" << endl;
        break;

    case 'u':
        cout << alph << " is a Vowel" << endl;
        break;

    default:
        cout << alph << " is not a Vowel";
        break;
    }

    return 0;
}