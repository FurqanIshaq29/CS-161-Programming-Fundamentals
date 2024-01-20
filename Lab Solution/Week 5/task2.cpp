#include <iostream>
using namespace std;

string checkAlphabet(char alpha);

int main()
{
    char alpha;
    cout << "Enter an alphabet : ";
    cin >> alpha;
    string res = checkAlphabet(alpha);
    cout << res;
}

string checkAlphabet(char alpha)
{
    if (alpha == 'A')
    {
        return "You have entered Capital A";
    }
    if (alpha == 'a')

    {
        return "You have entered small A";
    }
    return 0;
}