#include <iostream>
using namespace std;

//reverse the string 

int main()
{
    string word;
    int idx = 0;
    cout << "Enter the numbers : ";
    getline(cin, word);
    while (word[idx] != '\0')
    {
        idx++;
    }
    

    for(int i = idx ; i >= 0 ; i--)
    {
        cout<<word[i];
    }
}