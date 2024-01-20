#include<iostream>
using namespace std;

void Reverse(string con);

int main()
{
string condition;
while (true)
{
cout<<"Enter the condition : ";
cin>>condition;
Reverse(condition);
}
}

void Reverse(string con)
{
if(con == "true")
{
cout<<"false" <<endl;
}

if(con == "false")
{
cout<<"true" <<endl;
}

}