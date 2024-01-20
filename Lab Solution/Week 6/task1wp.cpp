#include <iostream>
using namespace std;

char checkGrade(int n);
int main()
{
    int num;
    cout << "Enter the marks : ";
    cin >> num;
    char result = checkGrade(num);
    cout << "Your Grade : " << result;
}

char checkGrade(int n)
{
    if (n < 50)
    {
        return 'F';
    }

    else if (n >= 50 && n <= 60)
    {
        return 'E';
    }
    else if (n >= 61 && n <= 70)
    {
        return 'D';
    }
    else if (n >= 71 && n <= 80)
    {
        return 'C';
    }

    else if (n >= 81 && n <= 85)
    {
        return 'B';
    }
    else if (n > 85)
    {
        return 'A';
    }
    return 0;
}