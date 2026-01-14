#include <iostream>
using namespace std;

int main() {
    int days;
    float fine = 0;

    cout << "Enter number of days late: ";
    cin >> days;

    if (days <= 5) {
        fine = days * 0.50;
        cout << "Fine = Rs " << fine << endl;
    }
    else if (days <= 10) {
        fine = (5 * 0.50) + (days - 5) * 1.0;
        cout << "Fine = Rs " << fine << endl;
    }
    else if (days <= 30) {
        fine = (5 * 0.50) + (5 * 1.0) + (days - 10) * 5.0;
        cout << "Fine = Rs " << fine << endl;
    }
    else {
        cout << "Membership cancelled!" << endl;
    }

    return 0;
}
