#include <iostream>
#include<fstream>
using namespace std;

void studentDetails();
void storeData(string name,int age,int MATRIC_marks,int ECAT_marks,int FSC_marks);

int main()
{
    studentDetails();
}

void studentDetails()
{
    string name;
    int age, ECAT_marks, FSC_marks, MATRIC_marks;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter MATRIC marks: ";
    cin >> MATRIC_marks;

    cout << "Enter ECAT marks: ";
    cin >> ECAT_marks;
    cout << "Enter FSC marks: ";
    cin >> FSC_marks;
    storeData(name, age, MATRIC_marks, ECAT_marks,FSC_marks);
    
}

void storeData(string name,int age,int MATRIC_marks,int ECAT_marks,int FSC_marks)
{
    fstream file;
    file.open("studentDetails.txt",ios::out);
    file<<name<<" "<<age<<" "<<MATRIC_marks<<" "<<ECAT_marks<<" "<<FSC_marks<<endl;
    file.close();

}