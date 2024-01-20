#include<iostream>
using namespace std;

void pointLocation(int h,int x,int y);

int main()
{
    int h,x,y;
    cout<<"Enter the value of h: ";
    cin>>h;

    cout<<"Enter the value of x : ";
    cin>>x;

    cout<<"Enter the value of y axis: ";
    cin>>y;

    pointLocation(h,x,y);
}

void pointLocation(int h,int x,int y)
{
    if((x >= 0 && x <=3*h) && (y == 0)) 
    {
        cout<<"border"<<endl;
    }
    else if((x >= 0 && x <= h) && (y == h))
    {
        cout<<"border"<<endl;
    }
    else if((x >= 2*h && x <= 3*h) && (y == h))
    {
        cout<<"border"<<endl;
    }
    else if((x == h) && (y >= h && y <= 4*h))
    {
        cout<<"border"<<endl;
    }
    else if((x == 2*h) && (y >= h && y <= 4*h))
    {
        cout<<"border"<<endl;
    }
    else if((x == 0) && (y >= 0 && y <= h))
    {
        cout<<"border"<<endl;
    }
    else if((x == 3*h) && (y >= 0 && y <= h))
    {
        cout<<"border"<<endl;
    }
    else if((x >= h && x <= 2*h) && (y == 4* h))
    {
        cout<<"border"<<endl;
    }
    else if(x < 0 || x > 3*h)
    {
        cout<<"outside"<<endl;
    }
    else if(y < 0 || y > 4*h)
    {
        cout<<"outside"<<endl;
    }
    else if((x < h) && (y > h))
    {
        cout<<"outside"<<endl;
    }
    else if((x > 2*h) && (y > h))
    {
        cout<<"outside"<<endl;
    }
    
    else
    {
        cout<<"inside"<<endl;
    }
}
