#include <iostream>
using namespace std;
//program to find the number of vowels

int main()
{
    string word;
    int idx = 0;
    int count = 0;
    cout << "Enter the word : ";
    getline(cin, word);
    while (word[idx] != '\0')
    {
        idx++;
        
    }
 
    for (int i = 0; i < idx; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
            {
                count++;
            }
    }
    cout << "Number of vowels : " << count;
}