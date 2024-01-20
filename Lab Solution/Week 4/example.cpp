#include<iostream>
using namespace std;

void printName(string name);

int main()
{
string name = "Furqan";
printName(name);


printName("Farhan");

string name1;
cout<<"Enter Name : ";
cin>>name1;
printName(name1);


}

void printName(string name)
{
 cout<<"My name is : " <<name <<endl;
}
