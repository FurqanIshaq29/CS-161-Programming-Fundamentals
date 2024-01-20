#include <iostream>
using namespace std;

string calculateGrade(float percent);

int main()
{
    string name;
    float sub1, sub2, sub3, sub4, sub5, tot, a;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Enter the marks in English:";
    cin >> sub1;
    cout << "Enter the marks in Maths:";
    cin >> sub2;
    cout << "Enter the marks in Chemistry:";
    cin >> sub3;
    cout << "Enter the marks in Social Science:";
    cin >> sub4;
    cout << "Enter the marks in Biology:";
    cin >> sub5;
    tot = sub1 + sub2 + sub3 + sub4 + sub5;
    a = (tot * 100) / 500;

    string answer = calculateGrade(a);
    cout << "Your name : " << name << endl;
    cout << "Total Marks : " << tot << endl;
    cout << "Your Percentage : " << a << endl;
    cout << "Your Grade : " << answer;
}

string calculateGrade(float percent)
{
    string answer;
    if (percent < 40)
    {
        answer = "F";
    }
    else if (percent >= 40 && percent < 50)
    {
        answer = "D";
    }

    else if (percent >= 50 && percent < 60)
    {
        answer = "C";
    }
    else if (percent >= 60 && percent < 70)
    {
        answer = "B";
    }
    else if (percent >= 70 && percent < 80)
    {
        answer = "B+";
    }
    else if (percent >= 80 && percent < 90)
    {
        answer = "A";
    }

    else if (percent >= 90 && percent <= 100)
    {
        answer = "A+";
    }
    return answer;
}