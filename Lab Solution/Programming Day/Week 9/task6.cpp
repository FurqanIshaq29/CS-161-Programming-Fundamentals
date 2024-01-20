#include <iostream>
using namespace std;

// transportation of even odd

int main()
{
    int array[3];
    int transform;
    int answer[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the array : ";
        cin >> array[i];
    }

    cout << "Enter the number of times of transformation : ";
    cin >> transform;
    for (int i = 0; i < 3; i++)
    {
        if (array[i] % 2 == 0)
        {
            answer[i] = array[i];

            for (int j = 1; j <= transform; j++)
            {
                answer[i] = answer[i] - 2;
            }
        }
        if (array[i] % 2 == 1)
        {
            answer[i] = array[i];

            for (int j = 1; j <= transform; j++)
            {
                answer[i] = answer[i] + 2;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << answer[i];
    }
}