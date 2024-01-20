#include<iostream>
using namespace std;

void calculateTime(int hol);


int main()
{
float hol;

cout<<"Enter the number of Holidays:";
cin>>hol;

calculateTime(hol);

}


void calculateTime(int hol)
{
float c,d,e,g,i;
int h,j,f,b;

c=365-hol;
d=(c*63)+(hol*127);
b=30000-d;

if(d>30000)
{
f=-1*b;
g=f/60;
h=f%60;

cout<<"Tom will run away" <<endl;
cout<<g <<" hours and " <<h <<" minutes" ;
}
else
{
i=b/60;
j=b%60;

cout<<"Tom sleeps well" <<endl ;
cout<<i <<" hours and " <<j <<" minutes" ;
}
}