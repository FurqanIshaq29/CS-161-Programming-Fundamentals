#include <iostream>
using namespace std;

int calculateTotal(float v, float p1, float p2, float hours);
int calculateP1(float v, float p1, float p2, float hours);
int calculateP2(float v, float p1, float p2, float hours);

int main()
{
    float volume, p1, p2, hours;
    cout << "Enter the volume of the pool : ";
    cin >> volume;
    cout << "Enter flow rate of pipe 1 : ";
    cin >> p1;
    cout << "Enter flow rate of pipe 2 : ";
    cin >> p2;
    cout << "Enter the hours for which worker is absent : ";
    cin >> hours;
    int a = calculateTotal(volume, p1, p2, hours);
    int b = calculateP1(volume, p1, p2, hours);
    int c = calculateP2(volume, p1, p2, hours);
    if(a <= 100)
    {
    cout << "The pipe is " << a << "% full.Pipe 1 : " << b << "%. Pipe 2 : " << c << "%.";
    }
    if(a > 100)
    {
         a =  a - volume;
         cout<<"For " <<hours <<" hours the pool overflows with " <<a <<" litres."; 
    }
}
int calculateTotal(float v, float p1, float p2, float hours)
{
    int a, b;
    
    a = (p1 + p2) * hours;
    b = (a * 100) / v;
    return b;
}

int calculateP1(float v, float p1, float p2, float hours)
{
    int a, b, c;

    a = (p1 + p2) * 3;

    b = p1 * hours;
    c = (b * 100) / a;
    return c;
}

int calculateP2(float v, float p1, float p2, float hours)
{
    int a, b, c;
    a = (p1 + p2) * 3;
    b = p2 * hours;
    c = (b * 100) / a;
    return c;
}

