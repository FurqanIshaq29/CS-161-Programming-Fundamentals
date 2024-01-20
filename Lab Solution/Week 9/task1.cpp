#include<iostream>
using namespace std;

//displays the string 
int main()
{
    int size;
    cout<<"Enter the number of arrays : ";
    cin>>size;
    int num[size];
    for(int i = 0; i <size;i++)
    {
        cout<<"Enter a number : ";
        cin>>num[i];
    }

    for(int i = 0;i < size;i++)
    {
        cout<<num[i] <<endl;
    }
}