#include <iostream>
#include <fstream>

using namespace std;

void addUser(string userName, string password);
void storeUser(string userName, string password);
bool signIn(string userName, string password);
void viewStudent();
void loadData();
bool isValid();

const int UserCount = 100;
string userNames[UserCount];
string passwords[UserCount];
int user = 0;
int main()
{
    loadData();
    int choice = 1;
    string userName;
    string password;
    while (choice != 0)
    {
        cout << "PRESS 1 TO SIGNUP: " << endl;
        cout << "PRESS 2 TO VIEW STUDENT: " << endl;
        cout << "PRESS 3 TO LOGIN: " << endl;
        cout << "PRESS 0 TO EXIT: " << endl;
        cout << "Enter Choice";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter user name" << endl;
            cin >> userName;
            cout << "Enter password" << endl;
            cin >> password;
            addUser(userName, password);
            storeUser(userName, password);
        }
        if (choice == 2)
        {
            viewStudent();
        }
        if (choice == 3)
        {
            cout << "Enter user name" << endl;
            cin >> userName;
            cout << "Enter password" << endl;
            cin >> password;

            bool flag = signIn(userName, password);
            if (flag == true)
            {
                cout << "Valid" << endl;
            }
            if (flag == false)
            {
                cout << "Invalid" << endl;
            }
        }
    }
}

void addUser(string userName, string password)
{
    userNames[user] = userName;
    passwords[user] = password;
    user++;
}
void storeUser(string userName, string password)
{
    fstream file;
    file.open("student.txt", ios::app);
    file << userName << endl;
    file << password << endl;
    file.close();
}
bool signIn(string userName, string password)
{
    bool flag = false;
    for (int i = 0; i < user; i++)
    {
        if (userNames[i] == userName && passwords[i] == password)
        {
            flag = true;
            cout << "Login successful" << endl;
            break;
        }
    }
    return flag;
}

void viewStudent()
{
    cout << "Name\t"
         << " "
         << "password" << endl;
    for (int x = 0; x < user; x++)
    {
        cout << userNames[x] << "\t" << passwords[x] << endl;
    }
}

void loadData()

{
    fstream file;
    string uName;
    string pass;
    file.open("student.txt", ios::in);
    while (getline(file, uName) && getline(file, pass))
    {
        userNames[user] = uName;
        passwords[user] = pass;
        user++;
    }
    file.close();
}