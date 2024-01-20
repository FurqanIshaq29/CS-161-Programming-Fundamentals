#include <iostream>
using namespace std;

//reverse the number

int main()
{
    string number;
    int idx = 0;
    cout << "Enter the number : ";
    getline(cin, number);
    while (number[idx] != '\0')
    {
        idx++;
    }
    

    for(int i = idx ; i >= 0 ; i--)
    {
        cout<<number[i];
    }
}