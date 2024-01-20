#include <iostream>
using namespace std;

// scalar product of the number

int main()
{
    int product;
    int idx = 0;
    cout << "Enter the size of array : ";
    cin >> idx;
    int number[idx];

    for (int i = 0; i < idx; i++)
    {
        cout << "Enter the number : ";
        cin >> number[i];
    }
    cout << "Enter the number for scalar product : ";
    cin >> product;

    for (int i = 0; i < idx; i++)
    {

        cout << number[i] * product <<" ";
    }
}