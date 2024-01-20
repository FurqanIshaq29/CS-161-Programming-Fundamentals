#include <iostream>
using namespace std;
int main()
{
    string movies[5] = {"Gladiator", "Starwars", "Terminator", "Takinglives", "Tombrider"};
    int length = movies->length();
    string movie;
    float answer;
    cout << "Enter the movie name : ";
    cin >> movie;
    for (int i = 0; i < length; i++)
    {
        if (movie == movies[i])
        {
            if (i % 2 == 0)
            {
                answer = (10 * 500) / 100;
            }
            else if (i % 2 != 0)
            {
                answer = (5 * 500) / 100;
            }
            answer = 500 - answer;
        }
    }

    cout<<"Price after discount : " <<answer;
}