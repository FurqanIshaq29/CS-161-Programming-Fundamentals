#include<iostream>
using namespace std;

string checkNumber(int n1,int n2,int n3);

int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;
    cout<<"Enter the third number : ";
    cin>>n3;

    string answer = checkNumber(n1,n2,n3);
    cout<<answer;
}

string checkNumber(int n1,int n2,int n3)
{
    string con;
    if(n1 == n2 && n1== n3)
    {
        con = "Yes";
    }
    else{
        con = "No";
    }
    return con;

}