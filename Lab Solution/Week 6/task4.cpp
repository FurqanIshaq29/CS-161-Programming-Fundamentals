#include <iostream>
using namespace std;
string checkSpeed(float speed);

int main()
{

    float speed;
    cout << "Enter the speed : ";
    cin >> speed;

    string name = checkSpeed(speed);
    cout << "Your speed : " << name;
}

string checkSpeed(float speed)
{
    string speedy;
    if (speed <= 10)
    {
        speedy = "slow";
    }
    else if(speed>10 && speed <= 50)
    {
        speedy = "average";
    }

     else if(speed>50 && speed <= 150)
    {
        speedy = "fast";
    }
     else if(speed>150 && speed <= 1000)
    {
        speedy = "ultra fast";
    }
    else 
    {
        speedy = "extremely fast";
    }
    return speedy;
}