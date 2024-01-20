#include <iostream>
using namespace std;

int main()
{
    string sentence;
    int idx = 0;
    cout << "Enter the sentence : ";
    getline(cin, sentence);
    while (sentence[idx] != '\0')
    {
        idx++;
    }
    string final_sentence[idx];

    for (int i = 0; i < idx; i++)
    {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')
        {
            continue;
        }
        final_sentence[i] = sentence[i];
    }
    for (int i = 0; i < idx; i++)
{
    cout<<final_sentence[i];
}
}