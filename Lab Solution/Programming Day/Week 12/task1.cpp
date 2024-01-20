#include <iostream>
#include <fstream>
using namespace std;
void getBirthdayCake(string name, string age);
void storeData(string name, string age);
int main()
{
    string name;
    string age;
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
    getBirthdayCake(name, age);
}

void getBirthdayCake(string name,string age)
{
    storeData(name, age);
    
    if(age % 2 == 0)
    {
        cout<<"###############"<<endl;
        cout<<"#" <<age <<" HB "<<name <<"! " <<age <<" #" << endl;
        cout<<"###############"<<endl;
    }
    else
    {
        cout<<"***************"<<endl;
        cout<<"*" <<age <<" HB "<<name <<"! " <<age <<" *" << endl;
        cout<<"***************"<<endl;
    }
}

void storeData(string name, string age)

{
    fstream file;
    file.open("names.txt", ios::out);
    file << name << "," << age;
    file.close();
}

