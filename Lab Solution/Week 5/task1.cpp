#include <iostream>
using namespace std;

int multiply(int num);

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int result = multiply(number);
    cout<<"The answer of multiplication : " << result;
}

int multiply(int num)
{
    int res = num * 5;
    return res;
}