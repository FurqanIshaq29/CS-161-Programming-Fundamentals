#include<iostream>
using namespace std;
int main()
{
float in_v,acc,time,fi_v;
cout<<"Enter initial velocity : " ;
cin>>in_v;
cout<<"Enter acceleration : ";
cin>>acc;
cout<<"Enter time : ";
cin>>time;

fi_v = (acc*time) + in_v;
cout<<"Final velocity : " <<fi_v;
return 0;
}