#include<iostream>
using namespace std;
int main()
{
float length;
float width;
float area;

cout<<"Enter length of rectangle : " ;
cin>>length;
cout<<"Enter width of rectangle : " ;
cin>>width;

area = length * width;

cout<<"The Area of rectangle is : " << area ;
return 0;
}