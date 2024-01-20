#include<iostream>
using namespace std;
int main()
//length is even or odd;
{
    string word;
    cout<<"Enter the word : ";
    cin>>word;

    int length  = word.length();
    if((length %2) == 0)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}