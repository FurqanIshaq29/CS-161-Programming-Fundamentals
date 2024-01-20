#include <iostream>
using namespace std;

// Smallest number

int main()
{
    
    int large = -1;
     int size;
    cout<<"Enter the size of array you want: ";
    cin>>size; 

    int arr[size];
        cout<<"Enter number : ";

    for(int i = 0 ; i < size ; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    
    cout<<"Largest number : "<<large;
}