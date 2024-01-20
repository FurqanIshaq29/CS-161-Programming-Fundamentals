#include <iostream>
using namespace std;

// quaters,dimes,nickles,pennies

int main()
{

    string prices_names[4] = {"quaters", "dimes", "nickles", "pennies"};
    float prices[4], sum = 0;
    float final_prices[4];
    float item_price;
    bool flag;

    for (int i = 0; i <= 3; i++)
    {
        cout << "Enter the " << prices_names[i] << " price : ";
        cin >> prices[i];
    }

    cout << "Enter the price of the item : ";
    cin >> item_price;
    final_prices[0] = prices[0] * 0.25;
    final_prices[1] = prices[1] * 0.10;
    final_prices[2] = prices[2] * 0.05;
    final_prices[3] = prices[3] * 0.01;

    for (int i = 0; i <= 3; i++)
    {
        sum = sum + final_prices[i];
        if (sum >= item_price)
        {
            flag = true;
        }

        else
        {
            flag = false;
        }
    }
    cout<<flag;
}