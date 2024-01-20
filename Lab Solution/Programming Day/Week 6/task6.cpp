#include <iostream>
using namespace std;
float apartmentCal(string month, float stays);
float studioCal(string month, float stays);

int main()
{
    string month;
    float stays;
    cout << "Enter a month : ";
    cin >> month;
    cout << "Enter the number of stays : ";
    cin >> stays;
    float apartment = apartmentCal(month, stays);
    cout << apartment <<"$"  <<endl;
    float studio = studioCal(month, stays);
    cout << studio <<"$";
}

float apartmentCal(string month, float stays)
{
    float ans, c;
    if (stays <= 14)
    {
        if (month == "may" || month == "october")
        {
            ans = (stays * 65);
        }

        else if (month == "june" || month == "september")
        {
            ans = (stays * 68.70);
        }

        else if (month == "july" || month == "august")
        {
            ans = (stays * 77);
        }
    }
    if (stays > 14)
    {
        float a, b;
        if (month == "may" || month == "october")
        {
            a = (stays * 65);
            b = (a - ((a * 10) / 100));
            ans = b;
        }

        else if (month == "june" || month == "september")
        {
            a = (stays * 68.70);
            b = (a - ((a * 10) / 100));
            ans = b;
        }

        else if (month == "july" || month == "august")
        {
            a = (stays * 77);
            b = (a - ((a * 10) / 100));
            ans = b;
        }
    }
    cout << "Apartment : ";
    return ans;
}

float studioCal(string month, float stays)
{
    float ans;
    if (month == "may" || month == "october")
    {
        float a, b;
        if (stays <= 7)
        {
            ans = (stays * 50);
        }
        else if (stays > 7 && stays <= 14)
        {
            a = (50 * 5) / 100;
            b = 50 - a;
            ans = (stays * b);
        }

        else if (stays > 14)
        {
            a = (50 * 30) / 100;
            b = 50 - a;
            ans = (stays * b);
        }
    }

    else if (month == "june" || month == "september")
    {
        float a, b;
        if (stays <= 14)
        {
            ans = (75.20 * stays);
        }

        else if (stays > 14)
        {
            a = (75.20 * 20) / 100;
            b = 50 - a;
            ans = (stays * b);
        }
    }

    else if (month == "july" || month == "august")
    {
        float a, b;
        ans = (stays * 76);
    }
    cout << "Studio : ";
    return ans;
}
