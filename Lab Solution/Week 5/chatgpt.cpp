#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if (isupper(c)) {
        cout << c << " is an uppercase letter." << endl;
    } else if (islower(c)) {
        cout << c << " is a lowercase letter." << endl;
    } else {
        cout << c << " is not a letter." << endl;
    }

    return 0;
}




