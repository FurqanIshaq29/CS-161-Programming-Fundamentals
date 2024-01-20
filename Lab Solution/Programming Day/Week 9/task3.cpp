#include <iostream>
using namespace std;
int main()
{
    string fruit;
    bool flag;
    cout << "Enter the name of the fruit : ";
    getline(cin,fruit);

    int length = fruit.length();
    if(length % 2 == 0)
    {
        flag = true;
    }
    else 
    {
        flag = false;
    }
    cout<<flag;
}