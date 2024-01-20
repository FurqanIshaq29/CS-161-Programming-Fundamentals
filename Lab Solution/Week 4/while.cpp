#include<iostream>
using namespace std;
void ifPass(int marks);

int main()
{
int markss;

while(true)
{
cout<<"Enter marks : ";
cin>>markss;


ifPass(markss);
}
}

void ifPass(int marks)
{


if(marks > 50 )
  {
   cout << "You have Passed first quiz of PF " <<endl;
  }
if(marks == 50)
  {
   cout<<"Your marks are 50" <<endl;
  }
if(marks < 50)
  {
   cout<<"You are fail" <<endl;
  }
}