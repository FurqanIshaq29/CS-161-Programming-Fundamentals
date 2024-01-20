#include<iostream>
using namespace std;
int main()
{

float num1;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float num9;
float num10;
float a1;
float a2;
float a3;
float a4;
float result;

cout<<"Enter number 1: " ;
cin>>num1;
cout<<"Enter number 2: " ;
cin>>num2;
cout<<"Enter number 3: " ;
cin>>num3;
cout<<"Enter number 4: " ;
cin>>num4;
cout<<"Enter number 5: " ;
cin>>num5;
cout<<"Enter number 6: " ;
cin>>num6;
cout<<"Enter number 7: " ;
cin>>num7;
cout<<"Enter number 8: " ;
cin>>num8;
cout<<"Enter number 9: " ;
cin>>num9;
cout<<"Enter number 10: " ;
cin>>num10;

a1 = num3+num5+num9;
cout<<"Answer of Addition : " <<a1 <<endl;
a2 = num7*num10*num6;
cout<<"Answer of Multiplication : " <<a2 <<endl;
a3 = num8/num4;
cout<<"Answer of Division : " <<a3 <<endl;
a4 = num2-num1;
cout<<"Answer of Subtraction : " <<a4 <<endl;

result = a1+a2+a3+a4;

cout<<"Answer is : " <<result;

return 0;
}
