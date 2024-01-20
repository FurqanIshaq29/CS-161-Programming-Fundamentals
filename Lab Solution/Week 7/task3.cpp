#include <iostream>
using namespace std;

int frequency(int num, int digit);

int main()
{
    int digit, num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter the digit for frequency : ";
    cin >> digit;
    int fre = frequency(num, digit);
    cout << fre;
}

int frequency(int num, int digit)
{
    int count = 0;
    int a,b;
    while (num > 0)
    {
        
        a = num % 10;
        b = num / 10;

        num = b;
        if (digit == a)
        {
            count++;
        }
    }
    return count;
}
