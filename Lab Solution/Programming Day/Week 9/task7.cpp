#include <iostream>
using namespace std;
// common characters

int main()
{
    string str1;
    string str2;
    int idx = 0;
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;

    cout << "Enter the string 1 : ";
    cin >> str1;
    cout << "Enter the string 2 : ";
    cin >> str2;

    while (str1[idx] != '\0')
    {
        idx++;
    }
    while (str1[count] != '\0')
    {
        count++;
    }



    for (int i = 0; i < idx; i++)
    {
        for (int j = 0; j < idx; j++)
        {
            if (str1[i] == str2[j])
            {
                count1++;
                str2[j]='0';
                break;
            }
        }
    }
    cout<<count1;
}