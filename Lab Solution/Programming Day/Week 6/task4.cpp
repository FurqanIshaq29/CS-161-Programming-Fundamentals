#include <iostream>
using namespace std;

float calculateAnswer(char type, char day, float num);

int main()
{
    char type, day;
    float num;
    cout << "Enter the customer type : ";
    cin >> type;
    cout << "Enter the day type : ";
    cin >> day;
    cout << "Enter the number of minutes : ";
    cin >> num;

    float answer = calculateAnswer(type, day, num);

    cout << "The charges are : " << answer;
}

float calculateAnswer(char type, char day, float num)
{
    float answer;
    if (type == 'P')
    {
        if (day == 'D')
        {
            if (num <= 75)
            {
                answer = 25;
            }
            else if (num > 75)
            {
                num = num - 75;
                num = num * 0.1;
                answer = 25 + num;
            }
        }

        else if (day == 'N')
        {
            if (num <= 100)
            {
                answer = 25;
            }
            else if (num > 100)
            {
                num = num - 100;
                num = num * 0.05;
                answer = 25 + num;
            }
        }
    }

    else if ((type == 'R') && (day == 'D' || day == 'N'))
    {
        if (num <= 50)
        {
            answer = 10;
        }

        else if (num > 50)
        {
            num = num - 50;
            num = num * 0.2;
            answer = 10 + num;
        }
    }
    return answer;
}