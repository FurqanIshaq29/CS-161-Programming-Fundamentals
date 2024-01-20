#include <iostream>
using namespace std;

string answerAA(char al);

int main()
{
    char stu;
    while (true)
    {
        cout << "Enter a character : ";
        cin >> stu;
        string answer = answerAA(stu);
        cout << answer << endl;
    }
}

string answerAA(char al)
{
    string answer;
    if (al == 'y')
    {
        answer = "I am happy !";
    }
    return answer;
}