#include<iostream>
using namespace std;

void firstPrint(int rows);
void reversePrint(int rows);
int main()
{
    int rows;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    firstPrint(rows);
    reversePrint(rows);
}

void firstPrint(int rows)
{
    for(int i = 1; i <= rows ; i++)
    {
        for(int j = 1; j <= (rows - i) ; j++)
        {
            cout<<" ";
        }

        for(int k = 1; k <= i;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void reversePrint(int rows)
{
    for(int i = 1; i <= rows ; i++)
    {
        for(int k = 1; k <= i;k++)
        {
            cout<<" ";
        }
        for(int j = 1; j <= (rows - i) ; j++)
        {
            cout<<"*";
        }

        
        cout<<endl;
    }

}