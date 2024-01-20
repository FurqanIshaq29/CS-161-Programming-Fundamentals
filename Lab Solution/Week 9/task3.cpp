#include <iostream>
using namespace std;
//sum of string and average of the string 
int main()
{
    int num,sum=0,size;
    cout << "Enter the size of array : ";
    cin >> size;
    int nat_num[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number : ";
        cin >> nat_num[i];
    }
    for (int i = 0; i < size; i++)
    {  
        sum = sum + nat_num[i];
        
    }

    cout<<"Sum of numbers : " <<sum <<endl;
    float avg = sum/size;
    cout<<"Average of numbers : " <<avg;
}