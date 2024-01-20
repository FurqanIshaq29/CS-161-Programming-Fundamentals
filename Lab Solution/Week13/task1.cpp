#include <iostream>
using namespace std;
int row = 5;
int col = 5;
int arr2D[5][5];

int main()
{

    int i = 0;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter row " << i + 1 << " : ";
            cin >> arr2D[i][j];
        }
    }
}