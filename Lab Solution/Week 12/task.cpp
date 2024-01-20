#include <iostream>
using namespace std;

int main()
{
    while (choice != 0)
    {
        cout << "PRESS 1 TO SIGNUP: " << endl;
        cout << "PRESS 2 TO VIEW STUDENT: " << endl;
        cout << "PRESS 3 TO LOGIN: " << endl;
        cout << "PRESS 0 TO EXIT: " << endl;
        cout << "Enter Choice";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter user name" << endl;
            cin >> userName;
            cout << "Enter password" << endl;
            cin >> password;
        }
    }