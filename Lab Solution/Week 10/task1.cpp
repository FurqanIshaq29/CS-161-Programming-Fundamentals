#include <iostream>
using namespace std;
main()
{
    int size, count = 0;
    cout << "enter the size of array:";
    cin >> size;
    int days[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the day"
             << ":";
        cin >> days[idx];
    }
    for (int i = 0; i < size; i++)
    {
        if (days[i + 1] > days[i])
        {
            count++;
        }
    }
    cout << count - 1;
}