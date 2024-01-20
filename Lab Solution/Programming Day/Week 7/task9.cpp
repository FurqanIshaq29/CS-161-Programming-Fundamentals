#include <iostream>
using namespace std;

void triangle(int rows);

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    triangle(rows);
}

void triangle(int rows)
{
    int extend_rows;
    extend_rows = rows + rows;

    for (int x = 1; x <= rows; x++)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << "*";
        }
        for (int j = 1; j <= (extend_rows - (x + x)); j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= x; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}