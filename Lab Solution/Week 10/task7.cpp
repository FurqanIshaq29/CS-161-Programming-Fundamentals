#include<iostream>
using namespace std;
main()
{
    int size;
	cout<<"Enter the size of array : ";
	cin>>size;	
	string words[size];

	for(int idx=0;idx<size;idx++)
	{
		cout<<"Enter a word : ";
		cin>>words[idx];
	}
    for(int idx=0;idx<size;idx++)
    {
        if(idx==0)
        {
            idx=size-1;
            cout<<words[idx]<<" ";
        }
        for(int idx=1;idx<size-1;idx++)
        {
            cout<<words[idx]<<" ";
        }
        if(idx==size-1)
        {
        cout<<words[0];
        }
        
    }
}