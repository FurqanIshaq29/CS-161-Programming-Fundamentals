#include <iostream>
using namespace std;
int main()
{
    int ran;
    int n1 = 0;
    int n2 = 1;
    cout << "Enter the range : ";
    cin >> ran;
    int next = 0;
    cout << n1 << " , " << n2 ;
    for (int i = 0; i < (ran - 2); i++)
    {
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        cout << " , " << next ;
        
    }
}