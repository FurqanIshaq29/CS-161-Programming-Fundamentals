#include <iostream>
using namespace std;

int main()
{
    int pin[4];
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Boxstep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter a pin code : ";
        cin >> pin[i];
    }
    for (int i = 0; i < 4; i++)
    {
        int a;
        a = i + pin[i];
        if (a > 9)
        {
            int b = a - 9;
            cout << moves[b];
        }
        else
        {
            cout << moves[a] << endl;
        }
    }
}