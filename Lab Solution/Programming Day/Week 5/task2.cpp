#include <iostream>
using namespace std;
float pyramidVolume(int len, int wid, int hei, string unit);

int main()
{
    float len, wid, hei;
    string unit;
    cout << "Enter the length : ";
    cin >> len;
    cout << "Enter the width : ";
    cin >> wid;
    cout << "Enter the height : ";
    cin >> hei;
    cout << "Enter the unit : ";
    cin >> unit;

    float answer = pyramidVolume(len, wid, hei, unit);
    cout<<answer <<" cubic " <<unit <<"s";
}
float pyramidVolume(int len, int wid, int hei, string unit)
{
    if (unit == "centimeter")
    {
        float a ;
        a= (len * wid * hei) / 3;
        a = a * 1000000;
        return a;
    }
    if (unit == "millimeter")
    {
        float a;
        a = (len * wid * hei) / 3;
        a = a * 1000000000;
        return a;
        
    }
    if (unit == "kilometer")
    {
        float a; 
        a= (len * wid * hei) / 3;
        a = a / 1000000000;
        return a;
    }
    return 0;
}
