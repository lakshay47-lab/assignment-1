#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << "Using \\n (new line)\n";
    cout << "Hello\nWorld\n";

    cout << "\nUsing endl" << endl;
    cout << "Hello" << endl << "World" << endl;

    cout << "\nUsing \\b (backspace)\n";
    cout << "Helloo\b" << endl;

    cout << "\nUsing \\f (form feed)\f";
    cout << "After form feed" << endl;

    cout << "\nUsing setw()\n";
    cout << setw(10) << 123 << endl;
    cout << setw(10) << 456 << endl;

    return 0;
}
