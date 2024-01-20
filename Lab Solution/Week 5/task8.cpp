#include<iostream>
#include<cmath>
using namespace std;


float caclHeight(float distance,float degree);


int main()
{
float base;
float degrees;
cout<<"Enter base : ";
cin>>base;
cout<<"Enter angle : ";
cin>>degrees;

float answer = caclHeight(base,degrees);
cout<<"Height : " << answer;


}







float caclHeight(float distance,float degree)
{
float radian =57.2958;
float radians;
float angle;
float height;

radians = degree / radian;

angle = tan(radians);

height = angle * distance;
return height;

}