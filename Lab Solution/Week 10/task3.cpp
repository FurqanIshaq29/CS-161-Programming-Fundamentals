#include <iostream>
using namespace std;

//strictly greater number

int main()
{
    int size;
    cout << "How many number you want to enter: ";
    cin >> size;

    int num[size];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    int count = 0;
    int final[10];

    for (int i = 1; i < size; i++)
    {
        if ((num[i] > num[i - 1]) && (num[i] > num[i + 1]))
        {
            final[count] = num[i];
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No Peak Found";
    }
    else
    {

        for (int x = 0; x < count; x++)
        {
            cout << final[x] << " ";
        }
    }
}