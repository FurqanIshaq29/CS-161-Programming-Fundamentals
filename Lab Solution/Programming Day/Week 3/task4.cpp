#include<iostream>
using namespace std;
int main()
{
string name;
float sub1,sub2,sub3,sub4,sub5,tot_per;
cout<<"Enter name : ";
cin>>name;
cout<<"Enter subject 1 marks : " ;
cin>>sub1;
cout<<"Enter subject 2 marks : " ;
cin>>sub2;
cout<<"Enter subject 3 marks : " ;
cin>>sub3;
cout<<"Enter subject 4 marks : " ;
cin>>sub4;
cout<<"Enter subject 5 marks : " ;
cin>>sub5;
tot_per=((sub1+sub2+sub3+sub4+sub5)/500)*100;
cout<<"Your Percentage : " <<tot_per;
return 0;
}
