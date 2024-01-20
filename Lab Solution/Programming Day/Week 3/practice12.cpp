#include<iostream>
using namespace std;
int main()
{
int num,sum,a,b,c,d,dig1,dig2,dig3,dig4,dig5,dig6;
cout<<"Enter a five digit number : ";
cin>>num;
 
a = num / 10;
dig6 = num % 10;

dig5 = a % 10;
b = a / 10;
dig4 = b % 10;
c = b / 10;
dig3 = c % 10;
d = c / 10;
dig2 = d % 10;
dig1 = d / 10;

cout<<"Total individual digits :- " <<endl;
cout<<dig1 <<endl;
cout<<dig2 <<endl;
cout<<dig3 <<endl;
cout<<dig4 <<endl;
cout<<dig5 <<endl;
cout<<dig6 <<endl;

cout<<"Group of two :- " <<endl;
cout<<dig1 <<dig2 <<endl;
cout<<dig3 <<dig4 <<endl;
cout<<dig5 <<dig6 <<endl;

cout<<"Group of three :- " <<endl;
cout<<dig1 <<dig2 <<dig3 <<endl;
cout<<dig4 <<dig5 <<dig6 <<endl;


sum = dig1 + dig2 + dig3 + dig4 + dig5;
cout<<"Total sum : " <<sum ;
return 0;
}