#include <iostream>
using namespace std;

int idArray[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}};

int main()
{
    int count = 0;
    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if ((i = j) && (idArray[i][j] != 1))
            {
                flag = false;
            }
            if ((i != j) && (idArray[i][j] != 0))
            {

                flag = false;
            }
        }
    }
    if (flag == false)
    {
        cout<<"Not Identical";
    }
    else 
    {
        cout<<"Identical";
    }
    return 0;
}