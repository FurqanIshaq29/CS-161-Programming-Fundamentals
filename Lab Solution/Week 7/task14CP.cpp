#include<iostream>
using namespace std;

void printPercentage(float n);

int main()
{
    float num;

    cout<<"Enter all the numbers: ";
    cin>>num;

    printPercentage(num);
}

void printPercentage(float n)
{
    float p1,p2,p3,p4,p5;
    float cnt1 = 0;
    float cnt2 = 0;
    float cnt3 = 0;
    float cnt4 = 0;
    float cnt5 = 0;

    for(int x = 0 ; x < n ; x++)
    {
        float ctnum;
        cin>>ctnum;

        if(ctnum < 200)
        {
            cnt1++;
        }
        
        else if(ctnum >= 200 && ctnum <= 399)
        {
            cnt2++;
        }

        else if(ctnum >= 400 && ctnum <= 599)
        {
            cnt3++;
        }

        else if(ctnum >= 600 && ctnum <= 799)
        {
            cnt4++;
        }

        else if(ctnum >= 800 && ctnum <= 1000)
        {
            cnt5++;
        }
    }
        p1 = (cnt1*100)/n;
        cout<<"Percent p1: "<<p1<<"%"<<endl;
        p2 = (cnt2*100)/n;
        cout<<"Percent p2: "<<p2<<"%"<<endl;
        p3 = (cnt3*100)/n;
        cout<<"Percent p3: "<<p3<<"%"<<endl;
        p4 = (cnt4*100)/n;
        cout<<"Percent p4: "<<p4<<"%"<<endl;
        p5 = (cnt5*100)/n;
        cout<<"Percent p5: "<<p5<<"%"<<endl;
}