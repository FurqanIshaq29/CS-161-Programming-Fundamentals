#include <iostream>
using namespace std;

int main()
{
    int arr1[2];
    int size2;
    cout << "Enter the size of second array : ";
    cin >> size2;
    int arr2[size2];
    int size3 = size2 + 2;
    int arr3[size3];
    cout << "Enter the number for array 1 : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> arr2[i];
        arr3[i] = arr2[i];
    }

    cout << "Enter the number for array 2 : ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
        arr3[i + 2] = arr2[i];
    }
    cout << arr3[0] <<" ";
    for (int i = 2; i < size3; i++)
    {
        cout << arr3[i] <<" ";
    }
    cout << arr3[1];
}