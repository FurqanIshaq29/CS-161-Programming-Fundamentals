#include<iostream>
using namespace std;
void ifPass(int marks);

int main()
{
cout<<"Enter marks : ";
int markss;

cin>>markss;
ifPass(markss);
}

void ifPass(int marks)
{


if(marks > 50 )
  {
   cout << "You have Passed first quiz of PF ";
  }
if(marks == 50)
  {
   cout<<"Your marks are 50";
  }
if(marks < 50)
  {
   cout<<"You are fail";
  }
}