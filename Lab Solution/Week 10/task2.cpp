#include <iostream>
using namespace std;

int checkLetter(string temp , char letter);

int main()
{
    int number;
    char letter;
    int idx = 0;
    cout << "Enter the number of words : ";
    cin >> number;
    string words[number];
    string temp;
    int total = 0;
    cout << "Enter the letter : ";
    cin >> letter;
    cout << "Enter the 5 words : ";

    for (int i = 0; i < number; i++)

    {
        cin >> words[i];
    }

    for (int i = 0; i < number; i++)
    {
        temp = words[i];
        int ans = checkLetter(temp ,letter);
        total = total + ans;
    }

    cout<<total;
}

int checkLetter(string temp , char letter)
{
    int count = 0;

        for (int i = 0 ; temp[i] != '\0'; i++)
        {
            if (temp[i] == letter)
            {
                count = count + 1;
            }
        
        }
    return count;
}