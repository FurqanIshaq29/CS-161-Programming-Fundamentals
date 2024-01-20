#include<iostream>
using namespace std;
int main()
{
float charge;
float time;
float current;

cout<<"Enter the charge : " ;
cin>>charge;

cout<<"Enter the time : " ;
cin>>time;

current = charge/time;

cout<<"Current is : " << current;

return 0;
}

