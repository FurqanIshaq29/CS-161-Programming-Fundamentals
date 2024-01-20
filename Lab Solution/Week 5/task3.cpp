#include<iostream>
#include<cmath>
using namespace std;


int symmetrical(int n);

int main()
{
 int number;
cout<<"Enter a number : ";
cin>>number;
int res = symmetrical(number);
if(res == 3)
{
 cout<<"The number is symmetrical." <<endl;
}

if(res != 3)
{
 cout<<"The number is not symmetrical." <<endl;
}
}

int symmetrical(int num)
{
 int a,b,d1,d2,d3,res=0;
 d3 = num % 10;
 a = num / 10;
 d2 = a % 10;
 d1 = a / 10;
if(d1 == d3)
 {
  res = res + 1;
 }
if(d2 == d2)
 { 
  res = res + 1;
 } 
if (d3 == d1)
 {
  res = res + 1;
 }
return res;
}


