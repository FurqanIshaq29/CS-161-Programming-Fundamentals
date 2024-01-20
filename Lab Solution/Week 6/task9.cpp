#include <iostream>
using namespace std;

float calculateVolleyball(string year, float holiday, float weekends);

int main()
{
    float holiday;
    float weekends;
    string year;
    cout << "Enter the year : ";
    cin >> year;
    cout << "Enter the number of holidays : ";
    cin >> holiday;
    cout << "Enter the number of weekends for which he is travelling : ";
    cin >> weekends;

    int answer = calculateVolleyball(year, holiday, weekends);
    cout << "Total Days : " << answer;
}

float calculateVolleyball(string year, float holiday, float weekends)
{
    float rem_weekends, not_working, not_holidays, tot_holidays, answer;
    rem_weekends = 48 - weekends;
    not_working = (rem_weekends * 3) / 4;
    not_holidays = (holiday * 2) / 3;
    
    tot_holidays = not_working + not_holidays + weekends;
    
    if (year == "leap")
    {
        answer = tot_holidays + ((tot_holidays *15)/100);

    }

    if (year == "normal")
    {
        answer = tot_holidays;
    }
    return answer;
}