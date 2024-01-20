#include<iostream>
using namespace std;

int calculateGCD(int num1,int num2);
int calculateLCM(int num1,int num2,int gcd);

int main()
{
    int num1,num2;

    cout<<"Enter 1st number: ";
    cin>>num1;

    cout<<"Enter 2nd number: ";
    cin>>num2;

    int hcf = calculateGCD(num1,num2);
    cout<<"HCF : "<<hcf<<endl;

    int lcm = calculateLCM(num1,num2,hcf);
    cout<<"LCM : "<<lcm<<endl;
}

int calculateGCD(int num1,int num2)
{
    int hcf;
    if(num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(int x = 1 ; x <= num1 ; x++)
    {
        if(num1%x == 0 && num2%x == 0)
        {
            hcf = x;
        }
    }

    return hcf;
}

int calculateLCM(int num1,int num2,int gcd)
{
    int lcm;

    lcm = (num1*num2)/gcd;

    return lcm;
}