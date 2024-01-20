#include <iostream>
using namespace std;

//program to calculate how many times a letter is repeated in a string array using function

int checkltter(string temp, char letter, int number);

int main()
{
    int number;
    char letter;
    int total = 0;
    int counts =0;
    cout << "Enter the number of words : ";
    cin >> number;
    string words[number];
    string temp;
    cout << "Enter the letter : ";
    cin >> letter;
    cout << "Enter the 5 words : ";
    for (int i = 0; i < number; i++)

    {
        cin >> words[i];
    }

    for (int i = 0; i < number; i++)
    {
        temp = words [i];
        total = checkltter(temp, letter, number);
        counts = counts + total;
    }

    cout << "It is repeated " << counts << " times.";
}

int checkltter(string temp, char letter, int number)
{
    int count = 0;

    for (int i = 0; temp[i] != '\0'; i++)
    {
        if (temp[i] == letter)
        {
            count++;
        }
    }
    return count;
}