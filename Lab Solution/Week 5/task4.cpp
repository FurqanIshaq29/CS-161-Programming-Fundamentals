#include <iostream>
using namespace std;
string returnAnswer(int num);

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    string answer = returnAnswer(num);
    cout << "The number is : " << answer;
}

string returnAnswer(int num)
{
    int a, b, c, d1, d2, d3, d4, d5, ans;
    a = num / 10;
    d5 = num % 10;
    d4 = a % 10;
    b = a / 10;
    d3 = b % 10;
    c = b / 10;
    d2 = c % 10;
    d1 = c / 10;
    ans = d1 + d2 + d3 + d4 + d5;
    if ((ans % 2) == 0)
    {
        return "evenish";
    }
    if ((ans % 2) != 0)
    {
        return "oddish";
    }
    return 0;
}