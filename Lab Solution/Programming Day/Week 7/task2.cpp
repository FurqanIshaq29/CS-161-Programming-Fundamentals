#include<iostream>
using namespace std;

void nestedForExample(int rows);

int main()
{
    int rows;
    cout<<"enter the number of rows : ";
    cin>>rows;
    nestedForExample(rows);

}

void nestedForExample(int rows)
{
    for(int i = rows; i >= 1; i--)
    {
        for(int j=1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}