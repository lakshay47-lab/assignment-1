#include <iostream>
using namespace std;

int main() {
    int i;
    float d;
    char c;

    cout << "Enter an integer: ";
    cin >> i;

    cout << "Enter a decimal number: ";
    cin >> d;

    cout << "Enter a character: ";
    cin >> c;

    cout << "\nYou entered:\n";
    cout << "Integer = " << i << endl;
    cout << "Decimal = " << d << endl;
    cout << "Character = " << c << endl;

    return 0;
}
