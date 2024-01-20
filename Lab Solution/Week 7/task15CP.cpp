#include<iostream>
using namespace std;

float calculatePrice(float money,int liveyear);

int main()
{
    float money;
    int liveyear;

    cout<<"Enter the Inherited Money: ";
    cin>>money;

    cout<<"Enter the years You lived: ";
    cin>>liveyear;

    float ans = calculatePrice(money,liveyear);
    if(ans > 0)
    {
        cout<<"Yes! He will live a carefree life and will have "<<ans<<" dollars left.";
    }

    else
    {
        ans = -1*ans;
        cout<<"He will need "<<ans<<" dollars to survive.";
    }
}

float calculatePrice(float money,int liveyear)
{
    float val;
    int age = 18;

    for (int x = 1800 ; x <= liveyear ; x++)
    {
        if(x%2 == 0)
        {
            money = money - 12000;
        }
        if(x%2 != 0)
        {
            val = 12000 + (50*age);
            money = money - val;
        }

        age ++;
    }

    return money;
}