#include <iostream>
using namespace std;
main()
{
    int number, unit, ten;

    cout << "Please enter any number between 0-99: ";
    cin >> number;
    if (number >= 19)
    {
        ten = number / 10;
        unit = number % 10;
    }
    if (number < 0 || number > 99)

        cout << "Number is out of range";

    if (number >= 11 && number <= 19)

    {
        if (number == 11)
        {
            cout << "eleven";
        }
        else if (number == 12)
        {
            cout << "twelve";
        }
        else if (number == 13)
        {
            cout << "thirteen";
        }
        else if (number == 14)
        {
            cout << "fourteen";
        }
        else if (number == 15)
        {
            cout << "fifteen";
        }
        else if (number == 16)
        {
            cout << "sixteen";
        }
        else if (number == 17)
        {
            cout << "seventeen";
        }
        else if (number == 18)
        {
            cout << "eighteen";
        }
        else if (number == 19)
        {
            cout << "ninteen";
        }
    }

    if (ten >= 2 && ten <= 9)
    {
        if (ten == 1)
        {
            cout << "ten";
        }
        else if (ten == 2)
        {
            cout << "twenty";
        }
        else if (ten == 3)
        {
            cout << "thirty";
        }
        else if (ten == 4)
        {
            cout << "fourty";
        }
        else if (ten == 5)
        {
            cout << "fifty";
        }
        else if (ten == 6)
        {
            cout << "sixty";
        }
        else if (ten == 7)
        {
            cout << "seventy";
        }
        else if (ten == 8)
        {
            cout << "eighty";
        }
        else if (ten == 9)
        {
            cout << "ninty";
        }
    }
    if (unit >= 0 && unit <= 9)
    {
        if (unit == 0)
        {
            cout << " zero";
        }
        else if (unit == 1)
        {
            cout << " one";
        }
        else if (unit == 2)
        {
            cout << " two";
        }
        else if (unit == 3)
        {
            cout << " three";
        }
        else if (unit == 4)
        {
            cout << " four";
        }
        else if (unit == 5)
        {
            cout << " five";
        }
        else if (unit == 6)
        {
            cout << " six";
        }
        else if (unit == 7)
        {
            cout << " seven";
        }
        else if (unit == 8)
        {
            cout << " eight";
        }
        else if (unit == 9)
        {
            cout << " nine";
        }
    }
}