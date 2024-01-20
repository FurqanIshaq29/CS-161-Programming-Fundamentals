#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void writeData();
void readData();
int isPresent(string name, string password);
string getField(string record, int field);
void displayOutput(int index);

string names[10], passwords[10];
string age[10];
string gpa[10];
int idx = 0;

int main()
{

    writeData();
    readData();
    string name;
    string password;
    cout << "Enter your name : ";
    getline(cin, name);
    cout << "Enter your password : ";
    getline(cin, password);
    int index = isPresent(name, password);
    if (index == -1)
    {
        cout << "User not found." << endl;
    }
    else
    {
        displayOutput(index);
    }
}
int isPresent(string name, string password)
{
    int index = -1;
    for (int i = 0; i < idx; i++)
    {
        if (name == names[i] && password == passwords[i])
        {
            index = i;
        }
    }

    return index;
}

void writeData()
{
    fstream file;
    file.open("data.txt", ios::out);
    file << "Jane,111,18,3.4\n";
    file << "Joe,321,45,3.9\n";
    file << "Smith,*677,32,4.0\n";
    file.close();
}

void readData()
{
    string record;
    fstream file;
    file.open("data.txt", ios::in);

    while (!(file.eof()))
    {
        getline(file, record);
        names[idx] = getField(record, 1);
        passwords[idx] = getField(record, 2);
        age[idx] = (getField(record, 3));
        gpa[idx] =(getField(record, 4));
        idx++;
    }

    file.close();
}

string getField(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int i = 0; i < record.length(); i++)
    {
        if (record[i] == ',')
        {
            commaCount++;
        }
        else if (commaCount == field)
        {
            item = item + record[i];
        }
        
    }
    return item;
}

void displayOutput(int index)
{
    cout << "Name\tAge\tGPA\tPass" << endl;
    cout << names[index] << "\t" << age[index] << "\t" << gpa[index] << "\t" << passwords[index] << endl;
}