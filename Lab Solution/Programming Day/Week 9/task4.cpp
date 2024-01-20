#include <iostream>
using namespace std;
int main()
{
    string number;
    cout << "Enter a number : ";
    cin >> number;
    int idx = 0;
    bool flag = false;
    while (number[idx] != '\0')
    {
        if (number[idx] == '7')
        {
            
            flag = true;
            break;
        }
        idx++;
    }

    cout << flag;
}