#include<iostream>
using namespace std;

void add(int number1,int number2);

int main()
{
int n1,n2;
cout<<"Enter number1 : ";
cin>>n1;
cout<<"Enter number2 : ";
cin>>n2;
add(n1,n2);


}

void add(int number1,int number2)
{
cout<<"Sum : " <<number1+number2;
}
