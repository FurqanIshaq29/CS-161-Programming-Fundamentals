#include <iostream>
using namespace std;

float calculateQatar(float budget, string category, float num);

int main()
{
    float budget, num;
    string category;

    cout << "Enter your budget : ";
    cin >> budget;
    cout << "Enter the category : ";
    cin >> category;
    cout << "Enter the number of people : ";
    cin >> num;

    float answer = calculateQatar(budget, category, num);
    if(answer < 0)
    {
        answer = answer *-1;
        cout<<"Not enough money!You need " <<answer <<" QR.";
    }

    else if(answer > 0)
    {
        cout<<"Yes!You have " <<answer<<" QR left."; 
    }
}

float calculateQatar(float budget, string category, float num)
{
    float amount, num1;
    float discount1, discount2, discount3, discount4, discount5;
    discount1 = ((budget * 75) / 100);
    discount2 = ((budget * 60) / 100);
    discount3 = ((budget * 50) / 100);
    discount4 = ((budget * 40) / 100);
    discount5 = ((budget * 25) / 100);
    if (category == "normal")
    {
        num1 = (num * 249.99);
        if (num >= 1 && num <= 4)
        {
            amount = budget - discount1 - num1;
        }
        else if (num >= 5 && num <= 9)
        {
            amount = budget - discount2 - num1;
        }
        else if (num >= 10 && num <= 24)
        {
            amount = budget - discount3 - num1;
        }
        else if (num >= 25 && num <= 49)
        {
            amount = budget - discount4 - num1;
        }
        else if (num > 50)
        {
            amount = budget - discount5 - num1;
        }
    }

    else if (category == "VIP")
    {
        num1 = (num * 499.99);
        if (num >= 1 && num <= 4)
        {
            amount = budget - discount1 - num1;
        }
        else if (num >= 5 && num <= 9)
        {
            amount = budget - discount2 - num1;
        }
        else if (num >= 10 && num <= 24)
        {
            amount = budget - discount3 - num1;
        }
        else if (num >= 25 && num <= 49)
        {
            amount = budget - discount4 - num1;
        }
        else if (num > 50)
        {
            amount = budget - discount5 - num1;
        }
    }
    return amount;
}