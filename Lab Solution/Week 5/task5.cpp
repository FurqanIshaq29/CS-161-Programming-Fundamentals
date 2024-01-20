#include <iostream>
using namespace std;
int calculateMinutes(int hours, int minutes);
int calculateHours(int hours, int minutes);

int main()

{
    int hours, minutes;
    cout << "Enter the hours : ";
    cin >> hours;
    cout << "Enter the minutes : ";
    cin >> minutes;

    int result1 = calculateHours(hours, minutes);
    int result2 = calculateMinutes(hours, minutes);
    cout << result1 << " : " << result2;
}

int calculateHours(int hours, int minutes)
{

    if (minutes <= 45)
    {
        return hours;
    }
    if (minutes > 45)
    {
        hours = hours + 1;
        if (hours >= 24)
        {
            int c = 0;
            return c;
        }
        if (hours <= 23)
        {

            return hours;
        }
    }
}

int calculateMinutes(int hours, int minutes)
{
    if (minutes <= 45)
    {
        minutes = minutes + 15;
        return minutes;
    }
    if (minutes > 45)
    {
        int a, b;

        a = 15 + minutes;
        b = a - 60;
        return b;
    }
}