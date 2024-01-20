#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    int count = 0;
    string line;
    file.open("memo.txt", ios::in);
    while (!(file.eof()))
    {
        file >> line;
        count++;
    }
    file.close();
    cout << count << endl;
}