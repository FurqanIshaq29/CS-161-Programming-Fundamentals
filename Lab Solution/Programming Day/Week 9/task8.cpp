#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    string array[size];

    cout << "Enter the colour : ";

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int answer = size * 2;
    for (int i = 0; i < size; i++)
    {
        if ((array[i] != array[i + 1]))
        {
            
                answer = answer + 1;
            
        }
    }
    cout << answer - 1;
}