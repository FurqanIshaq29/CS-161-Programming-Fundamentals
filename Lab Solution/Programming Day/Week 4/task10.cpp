#include<iostream>
using namespace std;

void finalPrice(string c_n,float t_p);

int main()
{
 string country_name;
 float ticket_price;
while(true)
{
 cout<<"Enter the country name :";
 cin>>country_name;
 cout<<"Enter the ticket price :";
 cin>>ticket_price;
 
 finalPrice( country_name,ticket_price);

}
}

void finalPrice(string c_n,float t_p)
{
float final_price,a;

 if(c_n == "pakistan")
{
 
 a = ((t_p * 5)/100);
 final_price = (t_p - a);
 cout<<"Final price after discount : " <<final_price <<endl;
}
 if(c_n == "ireland")
{
a = ((t_p * 10)/100);
 final_price = t_p - a;
 cout<<"Final price after discount : " <<final_price <<endl;

}

 if(c_n == "india")
{
a = ((t_p * 20)/100);
 final_price = t_p - a;
 cout<<"Final price after discount : " <<final_price <<endl;
}

 if(c_n == "england")
{
a = ((t_p * 30)/100);
 final_price = t_p - a;
 cout<<"Final price after discount : " <<final_price <<endl;
}

 if(c_n == "canada")
{
a = ((t_p * 45)/100);
 final_price = t_p - a;
 cout<<"Final price after discount : " <<final_price <<endl;
}
}