#include <iostream>
using namespace std;

float lowestPrice(float km, string daytime);
int main()
{
    float km;
    string daytime;
    cout << "Enter the kilometers : ";
    cin >> km;
    cout << "Enter the daytime : ";
    cin >> daytime;

    float answer = lowestPrice(km, daytime);
    cout << "Lowest Price : " << answer;
}

float lowestPrice(float km, string daytime)

{
    float ans;
    if (km < 20)
    {
        if (daytime == "day")
        {
            ans = (0.70+(0.79*km));
        }
        else if(daytime == "night")
        {
            ans = (0.70 + (0.90*km));
        }
    }
    else if (km >=20 && km < 100)
    {
        ans = (0.09 * km);
    }

    else if(km >= 100)
    {
        ans = (0.06 * km);
    }

    return ans;

}