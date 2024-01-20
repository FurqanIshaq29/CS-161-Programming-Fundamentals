#include <iostream>
using namespace std;

string zodiacSign(int date, string month);

int main()
{
    int date;
    string month;
    cout << "Enter the date : ";
    cin >> date;
    cout << "Enter the  month : ";
    cin >> month;

    string answer = zodiacSign(date, month);
    cout << "Your Fstar : " << answer;
}

string zodiacSign(int date, string month)
{
    string answer;
    if ((month == "march" && date >= 21 && date <= 31) || (month == "april" && date >= 1 && date <= 19))
    {
        answer = "Aries";
    }

    else if ((month == "april" && date >= 20 && date <= 30) || (month == "may" && date >= 1 && date <= 20))
    {
        answer = "Taurus";
    }

    else if ((month == "may" && date >= 21 && date <= 31) || (month == "june" && date >= 1 && date <= 20))
    {
        answer = "Gemini";
    }

    else if ((month == "june" && date >= 21 && date <= 30) || (month == "july" && date >= 1 && date <= 22))
    {
        answer = "Cancer";
    }

    else if ((month == "july" && date >= 23 && date <= 31) || (month == "august" && date >= 1 && date <= 22))
    {
        answer = "Leo";
    }

    else if ((month == "august" && date >= 23 && date <= 31) || (month == "september" && date >= 1 && date <= 22))
    {
        answer = "Virgo";
    }

    else if ((month == "september" && date >= 23 && date <= 30) || (month == "october" && date >= 1 && date <= 22))
    {
        answer = "Libra";
    }

    else if ((month == "october" && date >= 23 && date <= 31) || (month == "november" && date >= 1 && date <= 21))
    {
        answer = "Scorpio";
    }

    else if ((month == "november" && date >= 22 && date <= 30) || (month == "december" && date >= 1 && date <= 21))
    {
        answer = "Sagittarius";
    }

    else if ((month == "december" && date >= 22 && date <= 31) || (month == "january" && date >= 1 && date <= 19))
    {
        answer = "Capricorn";
    }

    else if ((month == "january" && date >= 20 && date <= 31) || (month == "february" && date >= 1 && date <= 18))
    {
        answer = "Aquarius";
    }

    else if ((month == "february" && date >= 19 && date <= 29) || (month == "march" && date >= 1 && date <= 20))
    {
        answer = "Pisces";
    }

    return answer;
}