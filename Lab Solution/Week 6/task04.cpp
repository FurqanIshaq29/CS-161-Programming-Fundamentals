#include <iostream>
using namespace std;
float calculateDiscount(float amount, string day, string month);

int main()
{
    float amount;
    string day, month;
    cout << "Enter the amount : ";
    cin >> amount;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the month : ";
    cin >> month;
    float result = calculateDiscount(amount, day, month);
    cout << "Total Payable Amount : " << result;
}

float calculateDiscount(float amount, string day, string month)
{
    float a, result;
    if (day == "sunday")
    {
        if (month == "october" || month == "march" || month == "august")
        {
            a = (amount - ((amount * 10) / 100));
            result = a;
        }
    }
    else if (day == "monday")
    {
        if (month == "november" || month == "december")
        {
            a = (amount - ((amount * 5) / 100));
            result = a;
        }

    }

    else
    {
        result = amount;
    }

    return result;
}