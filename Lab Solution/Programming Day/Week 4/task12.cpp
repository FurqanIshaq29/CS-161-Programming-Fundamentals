#include<iostream>
using namespace std;

void roses(float rR,float wR,float T);

int main()
{
float rR,wR,t;
cout<<"Red Rose : " ;
cin>>rR;
cout<<"White Rose : " ;
cin>>wR;
cout<<"Tulips : " ;
cin>>t;

roses(rR,wR,t);

}

void roses(float rR,float wR,float t)
{

float total;
total = ((rR * 2.00) + (wR * 4.10) + (t * 2.50));

if(total > 200)
 {
  float a,final;
   a = ((total * 20)/100);
   final = total - a;
   cout<<"Original Price : " <<total <<endl;
   cout<<"Price after Discount : " <<final <<endl;
  }
else 
{

cout<<"Price : " <<total <<endl;
}
}
