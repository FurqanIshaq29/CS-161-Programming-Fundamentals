#include<iostream>
using namespace std;
int main()
{
int num,sum,a,b,dig1,dig2,dig3,dig4;
cout<<"Enter a four digit number : ";
cin>>num;
 
a = num / 10;
dig4 = num % 10;

dig3 = a % 10;
b = a / 10;
dig2 = b % 10;
dig1 = b / 10;

sum = dig1 + dig2 + dig3 + dig4;
cout<<"Total sum : " <<sum ;
return 0;
}