#include <iostream>
#include <math.h>
using namespace std;

int iSqrt(int num);

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num < 0)
    {
        cout << "-1";
    }
    else if
    {
        int a = iSqrt(num);
        if (a == 0)
        {
        cout << a;
        }
        else if
        {
            a =a -1;
            cout<<a ;
        }
    }
}

int iSqrt(int num)
{
   
    int count;
    for (int i = num; i > 2; i = sqrt(num))
    {
        count++;
        num = i;
    }
   
    return count;
}