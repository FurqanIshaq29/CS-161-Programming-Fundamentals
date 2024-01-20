#include <iostream>
#include <fstream>
#include<windows.h>
#include<conio.h>
#include<sstream>
#include<string>

using namespace std;

void read();
void write(string name, string password, string percent);
int main()
{
    read();
  
}

void read()
{
    fstream file;
    string name, password, percent;
    file.open("student1.txt", ios::app);
    while (file.eof())
    {
        
        file >> name;
        file >> password;
        file >> percent;
    }
    file.close();
    write(name, password, percent);
}

void write(string name, string password, string percent)
{
    fstream file;
    file.open("output.txt", ios::out);
    
    if((stof(percent)) > 60)
    {
    file << "Name: " << name << endl;
    file << "Password: " << password << endl;
    file << "Percent: " << percent << endl;
    }
    file.close();
}
