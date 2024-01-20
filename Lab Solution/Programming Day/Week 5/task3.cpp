#include <iostream>
using namespace std;

float taxCalculator(float price,char type);

int main()
{
    float ve_pri;
    char ve_C;
    cout<<"Enter the price of the vehicle : ";
    cin>>ve_pri;
    cout<<"Enter the vehicle code : ";
    cin>>ve_C;
    float answer = taxCalculator(ve_pri,ve_C);
    float fAns = ve_pri + answer;
    cout<<"The final price on a vehicle of type " <<ve_C <<" after adding the tax is " <<fAns <<".";


}

float taxCalculator(float price,char type)
{
    float taxAmo;
    if (type == 'M')
    {
    taxAmo = (price * 6) / 100;
    return taxAmo;
    }

    if (type == 'E')
    {
    taxAmo = (price * 8) / 100;
    return taxAmo;
    }
    if (type == 'S')
    {
    taxAmo = (price * 10) / 100;
    return taxAmo;
    }
    if (type == 'V')
    {
    taxAmo = (price * 12) / 100;
    return taxAmo;
    }
    if (type == 'T')
    {
    taxAmo = (price * 15) / 100;
    return taxAmo;
    }
}