#include<iostream>
using namespace std;
void Recycle(int cycle,int size);
int array[100];

main()
{
    int size;
    int cycle;
    cout<<"enter the number of cycle:";
    cin>>cycle;
    cout<<"enter the size of array:";
    cin>>size;
    array[size];

    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter the number at the index "<<idx<<" :";
        cin>>array[idx];
    }
   Recycle(cycle,size);

}
void Recycle(int cycle,int size)
{
    bool flag;
    for(int i=0;i<size-1;i++)
    {
        if(array[i]==array[i+cycle])
        {
            flag=true;
        }
    }
    if(flag==true)
        {
            cout<<"true";
        }
    else
    {
        cout<<"false";
    }
}
