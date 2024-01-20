#include<iostream>
using namespace std;

//program to find whether the letter matched in the given string 

int main()
{
    string word;
    int idx = 0;
    char l;
    bool flag;
    cout<<"Enter the word : ";
    getline(cin,word);
    while(word[idx] != '\0' )
    {
        idx++;
    }
    cout<<"Enter the letter you want to check : ";
    cin>>l;

    for(int i = 0 ; i < idx ; i ++ )
    {
        if(word[idx] == l)
        {
            flag = true;
        }
    }

    if(flag == true)
    {
        cout<<"Letter matched.";
    }
    else{
        cout<<"Letter not matched . ";
    
    }


}