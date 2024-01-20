#include <iostream>
using namespace std;

int arr2D[4][3];
int checkIdenticalrows();
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter row " << i + 1 << " :";
            cin >> arr2D[i][j];
        }
    }

    int result = checkIdenticalrows();
    if (result == 1)
        cout << result + 1 << endl;
    else if (result == 6)
        cout << result-2 << endl;
        else
        cout<<result <<endl;
}

int checkIdenticalrows()
{
    int count = 0;
    int i = 0; // rows
    int j = 0; // columns
    if ((arr2D[i][j] == arr2D[i + 1][j]) && (arr2D[i][j + 1] == arr2D[i + 1][j + 1]) && (arr2D[i][j + 2] == arr2D[i + 1][j + 2]))
    {
        count++;
    }
    if ((arr2D[i][j] == arr2D[i + 2][j]) && (arr2D[i][j + 1] == arr2D[i + 2][j + 1]) && (arr2D[i][j + 2] == arr2D[i + 2][j + 2]))
    {
        count++;
    }
    if ((arr2D[i][j] == arr2D[i + 3][j]) && (arr2D[i][j + 1] == arr2D[i + 3][j + 1]) && (arr2D[i][j + 2] == arr2D[i + 3][j + 2]))
    {
        count++;
    }
    // for 2nd row
    if ((arr2D[i + 1][j] == arr2D[i + 2][j]) && (arr2D[i + 1][j + 1] == arr2D[i + 2][j + 1]) && (arr2D[i + 1][j + 2] == arr2D[i + 2][j + 2]))
    {
        count++;
    }
    if ((arr2D[i + 1][j] == arr2D[i + 3][j]) && (arr2D[i + 1][j + 1] == arr2D[i + 3][j + 1]) && (arr2D[i + 1][j + 2] == arr2D[i + 3][j + 2]))
    {
        count++;
    }

    // for 3rd row
    if ((arr2D[i + 2][j] == arr2D[i + 3][j]) && (arr2D[i + 2][j + 1] == arr2D[i + 3][j + 1]) && (arr2D[i + 2][j + 2] == arr2D[i + 3][j + 2]))
    {
        count++;
    }
    return count;
}
