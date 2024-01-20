#include <iostream>
using namespace std;

// program to calculate the percentages

void find_percentages(int num);
int main()
{
    int num;
    cout << "Enter the number of times : ";
    cin >> num;

    find_percentages(num);
}

void find_percentages(int num)

{
    int number;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;

    cout << "Enter " << num << " numbers : ";

    for (int i = 1; i <= num; i++)
    {
        cin >> number;

        if (number % 2 == 0)
        {
            count2++;
        }
        if (number % 3 == 0)
        {
            count3++;
        }

        if (number % 4 == 0)
        {
            count4++;
        }
    }

    float p1 = (count2 / num) * 100;
    float p2 = (count3 / num) * 100;
    float p3 = (count4 / num) * 100;
    cout << "Percentage p1 : " << p1 <<"%" << endl;
    cout << "Percentage p2 : " << p2 <<"%" << endl;
    cout << "Percentage p3 : " << p3 <<"%" << endl;
}