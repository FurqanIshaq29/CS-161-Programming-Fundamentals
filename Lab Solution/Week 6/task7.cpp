#include <iostream>
using namespace std;

float calculateAnswer(string pro, string city, float quan);

int main()
{
    string product, city;
    float quantity;
    cout << "Enter the product : ";
    cin >> product;
    cout << "Enter the city : ";
    cin >> city;
    cout << "Enter the quantity : ";
    cin >> quantity;

    float result = calculateAnswer(product, city, quantity);
    cout << result;
}

float calculateAnswer(string pro, string city, float quan)
{
    float ans;
    if (pro == "coffee")
    {
        if (city == "sofia")
        {
            ans = quan * 0.50;
        }
        else if (city == "plovdiv")
        {
            ans = quan * 0.40;
        }
        else if (city == "varna")
        {
            ans = quan * 0.45;
        }
    }

    else if (pro == "water")
    {
        if (city == "sofia")
        {
            ans = quan * 0.80;
        }
        else if (city == "plovdiv")
        {
            ans = quan * 0.70;
        }
        else if (city == "varna")
        {
            ans = quan * 0.70;
        }
    }

    else if (pro == "beer")
    {
        if (city == "sofia")
        {
            ans = quan * 1.20;
        }
        else if (city == "plovdiv")
        {
            ans = quan * 1.15;
        }
        else if (city == "varna")
        {
            ans = quan * 1.10;
        }
    }

    else if (pro == "sweets")
    {
         if (city == "sofia")
        {
            ans = quan * 1.45;
        }
        else if (city == "plovdiv")
        {
            ans = quan * 1.30;
        }
        else if (city == "varna")
        {
            ans = quan * 1.35;
        }
    }

    else if (pro == "peanuts")
    {
         if (city == "sofia")
        {
            ans = quan * 1.60;
        }
        else if (city == "plovdiv")
        {
            ans = quan * 1.50;
        }
        else if (city == "varna")
        {
            ans = quan * 1.55;
        }
    }

    return ans;
}