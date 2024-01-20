#include <iostream>
using namespace std;
int main()
{
    string array[4];
    cout << "Enter the string :";
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        cin >> array[i];
    }

    int i = 0;
    if (array[i] == array[i + 1] && array[i] == array[i + 2] && array[i] == array[i + 3])
    {
        flag = true;
    }
    cout << flag;
}