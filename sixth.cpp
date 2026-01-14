#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter a number: ";
    cin >> a;

    a += 5;   
    cout << "After using += 5, value = " << a << endl;

    a -= 3;   
    cout << "After using -= 3, value = " << a << endl;

    return 0;
}

