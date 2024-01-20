#include<iostream>
using namespace std;

void checkNum(int num);

int main()
{
int number;
while(true)
{
cout<<"Enter a number : " ;
 cin>>number;
 checkNum(number);
}
}

void checkNum(int num)
{
 if(num % 2 == 0)
   {
    cout<<"The number is Even." <<endl ;
   }
 if(num % 2 != 0)
   {
    cout<<"The number is Odd." <<endl;
   }
}
