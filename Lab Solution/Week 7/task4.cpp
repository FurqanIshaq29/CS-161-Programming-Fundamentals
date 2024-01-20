#include <iostream>
using namespace std;

int digitSum(int num);

int main()
{
    int  num;
    cout << "Enter a number : ";
    cin >> num;

    int sum = digitSum(num);
    cout << "Sum : " << sum;
}

int digitSum(int num)
{
    int rem_num, digi;
    int count=0;
    while (num > 0)
    {
        rem_num = num % 10;
        digi = num / 10;
        num = digi;

        count = rem_num + count;
      
    }
    return count;
}