#include<iostream>
using namespace std;
int main()
{
string name;
float matricNumber;
float interNumber;
float ECATmark;
float aggregate;
float a;
float b;
float c;
float d;
float e;
float f;


cout<<"Enter your name : " ;
cin>>name;
cout<<"Enter your Matric Marks : ";
cin>>matricNumber;
cout<<"Enter your Intermediate Marks : ";
cin>>interNumber;
cout<<"Enter your ECAT Marks : ";
cin>>ECATmark;

a = (matricNumber/1100)*100;
b = (interNumber/550)*100;
c = (ECATmark/400)*100;

d = (0.1)*a;
e = (0.4)*b;
f = (0.5)*c;

aggregate = d+e+f;



cout<<"Your Name : " <<name <<endl;
cout<<"Your Aggregate : " <<aggregate;

return 0;
}