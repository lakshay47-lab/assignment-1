#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Using if-else
    if (num % 2 == 0)
        cout << "Using if-else: Number is Even" << endl;
    else
        cout << "Using if-else: Number is Odd" << endl;

    // Using conditional (ternary) operator
    cout << "Using conditional operator: "
         << ((num % 2 == 0) ? "Even" : "Odd") << endl;

    return 0;
}
