#include<iostream>
using namespace std;

int calculateHours(int h,int d,int w);

int main()
{
    int hours,days,workers;
    cout<<"Enter the needed hours : ";
    cin>>hours;
      cout<<"Enter the needed days : ";
    cin>>days;
      cout<<"Enter the needed workers : ";
    cin>>workers;
    int answer = calculateHours(hours,days,workers);
    if( answer >= 1)
    {
        cout<<"Yes!" <<answer <<" hours left.";
    }
    if(answer < 1)
    {
        answer  = answer *-1;
        cout<<"Not enough time!" <<answer <<" hours needed.";
    }
    
}

int calculateHours(int h,int d,int w)
{
    int a,b,c;
    a = d*10;
    b=a*w;
    c = (b * 10)/100;
    int an = b - h - c;
    return an;
}