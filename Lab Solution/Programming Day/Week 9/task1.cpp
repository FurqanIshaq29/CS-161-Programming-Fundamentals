#include <iostream>
using namespace std;
int main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    int quantity, final_price;
    string fruit_name;

    cout << "Enter the name of the fruit : ";
    cin >> fruit_name;

    cout << "Enter the quantity : ";
    cin >> quantity;

    int length = fruit->length();
    for (int i = 0; i < length; i++)
    {
        if (fruit_name == fruit[i])
        {
            final_price = price[i] * quantity;
        }
    }

    cout << fruit_name << " : " << final_price;
}