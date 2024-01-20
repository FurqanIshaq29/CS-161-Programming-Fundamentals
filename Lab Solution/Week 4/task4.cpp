#include<iostream>
using namespace std;

void isEligible(int age);

int main()
{
int age;
while(1)
{
   cout<<"Enter age : ";
   cin>>age;
   isEligible(age);
}
}

void isEligible(int age)
{
 if(age >= 18)
   {
    cout<<"You are eligible to vote." <<endl;
   }
 if(age < 18)
   {
    cout<<"You are not eligible." <<endl;
   }
}