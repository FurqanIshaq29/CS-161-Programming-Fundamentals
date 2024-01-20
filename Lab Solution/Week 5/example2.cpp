#include<iostream>
#include<cmath>
using namespace std;
int power(int number1,int number2);

int main()
{

int n1,n2;
cout<<"Enter the number 1 : " ;
cin>>n1;
cout<<"Enter the number 2 : " ;
cin>>n2;

int result = power(n1,n2);
cout<<"The Power : " <<result <<endl;

}

int power(int number1,int number2)
{
 int power = pow(number1,number2);
 return power;
}
 