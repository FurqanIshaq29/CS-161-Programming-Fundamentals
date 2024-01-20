#include <iostream>
using namespace std;

float totalIncome(string screen, int rows, int columns);

int main()
{
    string screen;
    float rows, columns;
    cout << "Enter the screening : ";
    cin >> screen;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> columns;
    float result = totalIncome(screen, rows, columns);
    cout << "Total Income : " << result;
}
float totalIncome(string screen, int rows, int columns)

{
    float a;
    if (screen == "premier")
    {

        a = 12 * rows * columns;
    }

    else if (screen == "normal")
    {

        a = 7.5 * rows * columns;
    }

    else if (screen == "discount")
    {

        a = 5 * rows * columns;
    }

    return a;
}
