#include <iostream>
using namespace std;

string humidity(string temp, string humi);

int main()
{
    string temp, humi;
    cout << "Enter the temperature : ";
    cin >> temp;
    cout << "Enter the humidity : ";
    cin >> humi;
    string answer = humidity(temp, humi);
    cout << answer;
}

string humidity(string temp, string humi)
{
    string answer;
    if (temp == "warm")
    {
        if (humi == "dry")
        {
            answer = "Play tennis";
        }
        else if (humi == "humid")
        {
            answer = "swim";
        }
    }

    else if (temp == "cold")
    {
        if (humi == "dry")
        {
            answer = "Play basket ball";
        }
        else if (humi == "humid")
        {
            answer = "Watch TV";
        }
    }
    return answer;
}
