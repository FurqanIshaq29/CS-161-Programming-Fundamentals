#include<iostream>
using namespace std;
int main()
{
int num ,a,b,c,d,dig1,dig2,dig3;
int num2,w,x,y,z,di1,di2,di3;

cout<<"Enter first six number : ";
cin>>num;

cout<<"Enter first second number : ";
cin>>num2;

 
a = num / 100;
dig3 = num % 100;

dig2 = a % 100;
dig1 = a / 100;

b = num2 / 100;
di3 = num2 % 100;

di2 = b % 100;
di1 = b / 100;

cout<<"First Multiplication to 1 : " <<dig1 * di1 <<endl;
cout<<"First Multiplication to 2 : " <<dig1 * di2 <<endl;
cout<<"First Multiplication to 3: " <<dig1 * di3 <<endl;
cout<<"Second Multiplication to 1: " <<dig2 * di1 <<endl;
cout<<"Second Multiplication to 2: " <<dig2 * di2 <<endl;
cout<<"Second Multiplication to 3: " <<dig2 * di3 <<endl;
cout<<"Third Multiplication to 1: " <<dig3 * di1 <<endl;
cout<<"Third Multiplication to 2: " <<dig3 * di2 <<endl;
cout<<"Third Multiplication to 3: " <<dig3 * di3 <<endl;

return 0;
}