#include <iostream>
#include <fstream>
using namespace std;

void read();
void write(string name, string pass, string percen);

int main()
{
    read();
}

void read()
{
    string name, pass, percen;
    fstream file;
    file.open("stuD.txt", ios::in);
    while (!file.eof())
    {
        file >> name;
        file >> pass;
        file >> percen;

        write(name, pass, percen);
    }
    file.close();
}

void write(string name, string pass, string percen)
{
    fstream file;
    file.open("stuE.txt", ios::app);
    if (stoi(percen) > 60)
    {
        file << "Name: " << name << endl;
        file << "Password: " << pass << endl;
        file << "Percentage: " << percen << endl;
    }
    file.close();
}