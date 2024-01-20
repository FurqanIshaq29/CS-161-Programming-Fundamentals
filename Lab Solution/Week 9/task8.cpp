#include <iostream>
using namespace std;

//find the location of the character in the array

int main()
{
    string word;
    int idx = 0;
    char word_find;
    cout << "Enter the word : ";
    cin >> word;
    while (word[idx] != '\0')
    {
        idx++;
    }

    cout << "Enter the word to find its location : ";
    cin >> word_find;
    for (int i = 0; i < idx; i++)
    {
        if (word_find == word[i])
        {
            idx =i;
     
            break;
        }
    }

    cout << "The location of word " << word_find << " is : " << idx+1;
}