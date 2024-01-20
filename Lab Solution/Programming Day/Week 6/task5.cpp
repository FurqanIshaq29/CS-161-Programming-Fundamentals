#include <iostream>
using namespace std;

float calculatePrice(string fruit, string day, float quantity);

int main()
{
    string fruit, day;
    float price;
    cout << "Enter the fruit : ";
    cin >> fruit;
    cout << "Enter the day : ";
    cin >> day;
    cout << "Enter the quantity : ";
    cin >> price;

    float answer = calculatePrice(fruit, day, price);
    if (answer == -50)
    {
        cout << "Error";
    }
    else
    {
        cout << "Total Price : " << answer;
    }
}

float calculatePrice(string fruit, string day, float quantity)
{
    float answer;
    if (day == "saturday" || day == "sunday")
    {

        if (fruit == "banana")
        {
            answer = (2.70 * quantity);
        }

        else if (fruit == "apple")
        {
            answer = (1.25 * quantity);
        }

        else if (fruit == "orange")
        {
            answer = (0.90 * quantity);
        }

        else if (fruit == "grapefruit")
        {
            answer = (1.60 * quantity);
        }

        else if (fruit == "kiwi")
        {
            answer = (3.00 * quantity);
        }

        else if (fruit == "pineapple")
        {
            answer = (5.60 * quantity);
        }

        else if (fruit == "grapes")
        {
            answer = (4.20 * quantity);
        }
    }

    else if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {

        if (fruit == "banana")
        {
            answer = (2.50 * quantity);
        }

        else if (fruit == "apple")
        {
            answer = (1.20 * quantity);
        }

        else if (fruit == "orange")
        {
            answer = (0.85 * quantity);
        }

        else if (fruit == "grapefruit")
        {
            answer = (1.45 * quantity);
        }

        else if (fruit == "kiwi")
        {
            answer = (2.70 * quantity);
        }

        else if (fruit == "pineapple")
        {
            answer = (5.50 * quantity);
        }

        else if (fruit == "grapes")
        {
            answer = (3.85 * quantity);
        }
    }

    else
    {
        answer = -50;
    }
    return answer;
}