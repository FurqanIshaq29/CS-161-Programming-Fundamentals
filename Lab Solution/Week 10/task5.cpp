/*
program to find volume using array
*/
#include <iostream>
using namespace std;
int areaOfThree(int box);

int volume[100];

main()
{
    int box;
    cout << "enter the number of boxes:";
    cin >> box;
    int size = box * 3;
    volume[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter the number : ";
        cin >> volume[idx];
    }
    int sum = areaOfThree(size);
    cout << sum;
}
int areaOfThree(int box)
{
    int i = 0, ans1 = 0, ans2 = 0;
    while (i < box)
    {
        ans1 = volume[i] * volume[i + 1] * volume[i + 2];
        ans2 = ans2 + ans1;
        i = i + 3;
    }
    return ans2;
}
