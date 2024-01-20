#include <iostream>
using namespace std;

string checkTitle(char gender, float age);

int main()
{
    char gender;
    float age;
    cout << "Enter your gender : ";
    cin >> gender;
    cout << "Enter your age : ";
    cin >> age;

    string name = checkTitle(gender, age);
    cout<<"Your Gender title : " <<name;
}

string checkTitle(char gender, float age)
{
    string title;
    if (gender == 'm')
    {
        if (age >= 16)
        {
            title = "Mr.";
        }

        else{
                title = "Master";
        }
    }

    else if (gender == 'm')
    {
        if (age >= 16)
        {
            title = "Ms.";
        }
        else 
        {
            title = "Miss";

        }
    }
else 
{
    title = "Invalid";
}
     return title;
}