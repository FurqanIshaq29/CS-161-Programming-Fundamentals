#include<iostream>
using namespace std;

void greaterNumber(int firstNumber,int secondNumber);

int main()
{
int n1,n2;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
greaterNumber(n1,n2);
}


void greaterNumber(int firstNumber,int secondNumber)
{
 if ( firstNumber > secondNumber)
  {
   cout<<"Greater number : " <<firstNumber;
  }
 if ( firstNumber < secondNumber)
  {
   cout<<"Greater number : " <<secondNumber;
  }
}