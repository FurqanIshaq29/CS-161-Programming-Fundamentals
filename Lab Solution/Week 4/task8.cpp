#include<iostream>
using namespace std;

void totalAmount(string day,int amount);

int main()
{

int amount;
string day;
while(1)
{
cout<<"Enter the amount : ";
cin>>amount;
cout<<"Enter day : ";
cin>>day;
totalAmount(day,amount);
}
}


void totalAmount(string day,int amount)
{
  int amountFinal;
 if( day == "sunday")
   {
    amountFinal = (amount - ((10 * amount)/100));
    cout<<"Total Payable Amount : " <<amountFinal <<endl;
   }
 if( day != "sunday")
   {
    amountFinal = (amount - ((5 * amount)/100));
    cout<<"Total Payable Amount : " <<amountFinal <<endl;
   }
}
