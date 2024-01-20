#include <iostream>
using namespace std;

void answer(int num);

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    answer(num);
}

void answer(int num)
{
    int a;
    for (int i = 1; i <= num; i++)
    {
        
        if(i % 4 == 0)
        {
            a = i * 10;
            cout<<a <<",";
            continue;
        }
        cout<<i <<",";
    }
}