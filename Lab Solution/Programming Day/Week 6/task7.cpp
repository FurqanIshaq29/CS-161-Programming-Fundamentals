#include <iostream>
using namespace std;

int calculateTime(int start_timeH, int start_timeM, int arriv_timeH, int arriv_timeM);

int main()
{
    int start_timeH, start_timeM, arriv_timeH, arriv_timeM;
    cout << "Enter starting time in hours : ";
    cin >> start_timeH;
    cout << "Enter starting time in minutes : ";
    cin >> start_timeM;
    cout << "Enter arrival time in hours : ";
    cin >> arriv_timeH;
    cout << "Enter arrival time in minutes : ";
    cin >> arriv_timeM;

    int answer = calculateTime(start_timeH, start_timeM, arriv_timeH, arriv_timeM);
    if (answer <= 0)
    {
        if (answer >= -30)
        {
            answer = answer * -1;
            cout << "On Time" << endl;
            cout << answer << " Minutes before the time.";
        }
        else if (answer < -30 && answer > -60)
        {
            answer = answer * -1;
            cout << "Too Early" << endl;
            cout << answer << " Minutes before the time.";
        }
        else if (answer <= -60)
        {
            int a, b;
            answer = answer * -1;
            a = answer % 60;
            b = answer / 60;
            cout << "Too Early" << endl;
            cout << b << ":" << a << " before the time.";
        }
    }

    else if (answer > 0)
    {
        if (answer < 60)
        {
            cout << "Late" << endl;
            cout << answer << " Minutes after the time.";
        }
        else if (answer >= 60)
        {
            int a, b;
            a = answer % 60;
            b = answer / 60;
            cout <<"Late" <<endl;
            cout<<b<<":"<<a<<" Minutes after the time.";
        }
    }
}

int calculateTime(int start_timeH, int start_timeM, int arriv_timeH, int arriv_timeM)
{
    int a, b, c, d, tot_startM, tot_arrM;
    a = start_timeH * 60;
    tot_startM = a + start_timeM;
    b = arriv_timeH * 60;
    tot_arrM = b + arriv_timeM;

    c = tot_arrM - tot_startM;
    return c;
}
