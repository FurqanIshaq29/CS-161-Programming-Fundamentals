#include<iostream>
using namespace std;

float calculateMoney(int age , float machinePrice , float toyPrice);

int main()
{
    float machinePrice,toyPrice;
    int age;

    cout<<"Enter the Age : ";
    cin>>age;

    cout<<"Enter the Washing Machine Price: ";
    cin>>machinePrice;

    cout<<"Enter the price of toy : ";
    cin>>toyPrice;

    float ans = calculateMoney(age,machinePrice,toyPrice);
  if(ans > 0)
    {
        cout<<"Yes!"<<endl;
        cout<<ans;
    }

    else{
        ans = -1*(ans);
        cout<<"No!"<<endl;
        cout<<ans;
    }
  
    
}

float calculateMoney(int age , float machinePrice , float toyPrice)
{
    int evenCount = 0;
    int cashMoney = 0;
    int ttl = 0;
    int oddCount = 0;

    for(int i = 1 ; i <= age ; i = i+1)
    {
        if(i % 2 == 0)
        {
            evenCount++;
            cashMoney = cashMoney + 10;
             ttl = (ttl + cashMoney)-1;
        }

        else if(i % 2 != 0)
        {
            oddCount++;   
        }
    }
     float ttlToy = oddCount*toyPrice;
     float totalPrice = ttlToy + ttl;
     float final = totalPrice - machinePrice;

    return final;

}