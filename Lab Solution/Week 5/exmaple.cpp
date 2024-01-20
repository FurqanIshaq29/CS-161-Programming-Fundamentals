#include<iostream>
#include<cmath>
#include<windows.h>
#include<conio.h>

using namespace std;
float add(float number1,float number2);

float maximum(float number1,float number2);
float min(float number1,float number2);
float division(float number1,float number2);


int main()
{
 float n1,n2;
float result;
cout<<"Enter the number 1 : " ;
cin>>n1;
cout<<"Enter the number 2 : " ;
cin>>n2;
 result = add(n1,n2);
cout<<"The sum : " <<result <<endl;


 result = maximum(n1,n2);
cout<<"Greater Number : " <<result <<endl;
result = min(n1,n2);
cout<<"Smaller Number : " <<result <<endl;
result = division(n1,n2);
 cout<<"The division : " <<result <<endl;

}

float add(float number1,float number2)
{ 
float sum = number1 + number2;
 return sum;
}


float maximum(float number1,float number2)
{
   if(number1>number2)
   {
    return number1;
   }
   if(number2>number1)
   {
    return number2;
   }
  return 0;
}

float division(float number1,float number2)
 {
  float div = number1 / number2;
  return div;
 }

float min(float number1,float number2)
{   if(number1<number2)
   {
    return number1;
   }
   if(number2<number1)
   {
    return number2;
   }
  return 0;
}


