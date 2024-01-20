#include<iostream>
using namespace std;

void multiplication(int number1,int number2);
void add(int number1,int number2);
void subtraction(int number1,int number2);
void division(int number1,int number2);

int main()
{
int n1,n2;
cout<<"Enter number1 : ";
cin>>n1;
cout<<"Enter number2 : ";
cin>>n2;
add(n1,n2);
cout<<endl;
multiplication(n1,n2);
cout<<endl;
subtraction(n1,n2);
cout<<endl;
division(n1,n2);

}

void add(int number1,int number2)
{
cout<<"Sum : " <<number1+number2;
}

void multiplication(int number1,int number2)
{
cout<<"Multiplication : " <<number1*number2;
}
 
void subtraction(int number1,int number2)
{
cout<<"Subtraction : " <<number1-number2;
}
 
void division(int number1,int number2)
{
cout<<"Division : " <<number1/number2;
}
 