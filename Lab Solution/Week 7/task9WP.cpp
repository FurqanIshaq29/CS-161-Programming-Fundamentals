#include <iostream>
using namespace std;

string positive(int a);

int main()
{
    int a;
    while (true)
    {
        cout << "Enter a number : ";
        cin >> a;
        string answer = positive(a);
    }
}

string positive(int a)
{
    string asnwer;
    if (a < 0)
    {
        asnwer = "Error ! Enter a number greater than zero";
    }
    else
    {
        asnwer = " ";
    }
    return asnwer;
}