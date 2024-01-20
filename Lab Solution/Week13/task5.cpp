#include <iostream>
using namespace std;

int main()
{
    char matrix[5][5] = {
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'}};

    cout << "Enter a string : ";
    string word;
    cin >> word;
    string answer;

    int i = 0;
    int row;

    char col = word[1];
    int colIndex = (int)col - '1';
    if (word[i] == 'A')
    {
        row = 0;
    }
    else if (word[i] == 'B')
    {
        row = 1;
    }
    else if (word[i] == 'C')
    {
        row = 2;
    }
    else if (word[i] == 'D')
    {
        row = 3;
    }
    else if (word[i] == 'E')
    {
        row = 4;
    }
    if (matrix[row][colIndex] == '*')
    {
        answer = "Boom";
    }
    else if (matrix[row][colIndex] == '.')
    {
        answer = "splash";
    }

    cout << answer;
}
