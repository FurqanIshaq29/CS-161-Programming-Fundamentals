#include <iostream>
using namespace std;

// program to find the resistance

int main()
{

    int num_resis;
    float sum = 0;
    cout << "Enter the number of resistances : ";
    cin >> num_resis;
    float resistance[num_resis];

    for (int i = num_resis-1; i >= 0; i--)
    {
        cout << "Enter the resistance : ";
        cin >> resistance[i];
    }

    for (int i = num_resis-1; i >= 0; i--)
    {
        sum = sum + resistance[i];
    }

    cout<<sum <<" ohms";
}