// program to print next alphabet
// aslam=>btmbn
#include <iostream>
using namespace std;
int main()
{
    string word;
    int idx = 0;
    int count = 0;
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    cout << "Enter the word : ";
    getline(cin, word);
    while (word[idx] != '\0')
    {
        idx++;
       
    }

    while (alphabet[count] != '\0')
    {
        count++;
    }

    for (int y = 0; y < idx; y++)
    {
        for (int x = 0; x <= 25; x++)
        {
            if (word[y] == alphabet[x])
            {
                cout << alphabet[x + 1];
            }
        }
    }
}