#include <iostream>
using namespace std;

int countNumber(int num);

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    int answer = countNumber(num);
    cout << answer;
}

int countNumber(int num)
{
    int count = 0;
    while ((num  > 0) )
    {

        num = num / 10;
        count++;
    }
    return count ;
}