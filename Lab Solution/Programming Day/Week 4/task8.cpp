#include<iostream>
using namespace std;

void isEqual(int n1,int n2);

int main()
{
 int num1,num2;
while(true)
{
cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;

isEqual(num1,num2);
}

}

void isEqual(int n1,int n2)
{
 if(n1 == n2)
 {
   cout<<"True" <<endl;
 }
 else
 {
   cout<<"False" <<endl;
}
}