#include <iostream>
using namespace std;

// Smallest number

int main()
{

    int small = 10000;
    int size;
    cout << "Enter the size of array you want: ";
    cin >> size;

    int arr[size];
    cout << "Enter number : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }

    cout << "Smallest number : " << small;
}