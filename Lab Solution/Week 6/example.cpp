#include <iostream>
using namespace std;

int greaterNumber(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;

    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Enter third number : ";
    cin >> n3;
    int result = greaterNumber(n1, n2, n3);
    if (result == 0)
    {
        cout << "Invalid input.";
    }
    else
    {
        cout << "Greater Number : " << result;
    }
}

int greaterNumber(int n1, int n2, int n3)
{
    int greater;
    if (n1 > n2 && n1 > n3)
    {
        greater = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        greater = n2;
    }
    else if (n3 > n2 && n3 > n1)
    {
        greater = n3;
    }
    else
    {
        greater = 0;
    }
    return greater;
}