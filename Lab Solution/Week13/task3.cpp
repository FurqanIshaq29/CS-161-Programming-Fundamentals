#include <iostream>
using namespace std;
int row = 5;
int col = 5;
int arr2D[5][5] = {
    {3, 4, 6, 9, 1},
    {5, 6, 9, 7, 2},
    {4, 6, 8, 9, 3},
    {8, 3, 6, 1, 0},
    {2, 8, 5, 4, 3}};

int main()
{

    int i = 0;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr2D[i][j];
        }
    }
    cout << "sum = " << sum;
}