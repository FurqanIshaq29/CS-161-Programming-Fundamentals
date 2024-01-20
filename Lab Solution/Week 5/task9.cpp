#include<iostream>
#include<cmath>
using namespace std;
float calulateX1(float a,float b,float c);
float calulateX2(float a,float b,float c);
int main()
{
float a,b,c;
 cout<<"Enter the value of a : ";
cin>>a;
cout<<"Enter the value of b : ";
cin>>b;
cout<<"Enter the value of c : ";
cin>>c;

float result = calulateX1(a,b,c);
cout<< "The value of x : " <<result <<endl;

float result1 = calulateX2(a,b,c);
cout<< "The value of x : " <<result1;
}

float calulateX1(float a,float b,float c)
{
float result;
result = ( -(b) + (sqrt(((pow(b,2))) - (4 * a * c) ) ) ) / (2 * a);
return result;
}

float calulateX2(float a,float b,float c)
{
float result;
result = ( -(b) - (sqrt(((pow(b,2))) - (4 * a * c) ) ) ) / (2 * a);
return result;
}
