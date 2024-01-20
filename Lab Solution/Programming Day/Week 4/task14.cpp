#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate();
void compareMarks();


int main()
{
char op;
printMenu();
cin>>op;
if (op == '1')
   {
     calculateAggregate();
    }
if (op == '2')
   {
    compareMarks();
    }



}




void printMenu()
{

cout<<"*******************************************************************" <<endl ;
cout<<"*            University Admission Management System               *" <<endl ;
cout<<"*******************************************************************" <<endl ;
cout<<endl <<endl;
 cout<<"Main Menu >" <<endl ;
cout<<"_______________________________" <<endl ;
cout<<"Select one of the following option number... " <<endl ;
cout<<"1. Calculate Aggregate" <<endl ;
cout<<"2. Compare Marks" <<endl;
cout<<"Your Option....." <<endl ;


}


void calculateAggregate()
{
string name1;
float mat_marks1,inter_marks1,ecat_marks1;
string name2;
float mat_marks2,inter_marks2,ecat_marks2;

float a,b,c,d,e,f,aggregate1;

cout<<"Enter the student name 1 : ";
cin>>name1;
cout<<"Enter the Matric marks 1 : ";
cin>>mat_marks1;
cout<<"Enter the Inter marks 1 : ";
cin>>inter_marks1;
cout<<"Enter the ECAT marks 1 : ";
cin>>ecat_marks1;

a = (mat_marks1/1100)*100;
b = (inter_marks1/550)*100;
c = (ecat_marks1/400)*100;

d = (0.3)*a;
e = (0.3)*b;
f = (0.4)*c;

aggregate1 = d+e+f;



float a2,b2,c2,d2,e2,f2,aggregate2;

cout<<"Enter the student name 2 : ";
cin>>name2;
cout<<"Enter the Matric marks 2 : ";
cin>>mat_marks2;
cout<<"Enter the Inter marks 2 : ";
cin>>inter_marks2;
cout<<"Enter the ECAT marks 2 : ";
cin>>ecat_marks2;

a2 = (mat_marks2/1100)*100;
b2 = (inter_marks2/550)*100;
c2 = (ecat_marks2/400)*100;

d2 = (0.3)*a2;
e2 = (0.3)*b2;
f2 = (0.4)*c2;

aggregate2 = d2+e2+f2;

cout<<"Name of Student 1 : " <<name1 <<endl;
cout<<"Aggregate of Student 1 : " <<aggregate1 <<endl;
cout<<endl;

cout<<"Name of Student 2 : " <<name2 <<endl;
cout<<"Aggregate of Student 2 : " <<aggregate2 <<endl;
cout<<endl;
}


void compareMarks()
{

string name1,name2;
int ecat_marks1,ecat_marks2;

  cout<<"Enter the student name 1 : ";
cin>>name1;
 cout<<"Enter the ECAT marks 1 : ";
cin>>ecat_marks1;

cout<<"Enter the student name 2 : ";
cin>>name2;
cout<<"Enter the ECAT marks 2 : ";
cin>>ecat_marks2;

if(ecat_marks1 > ecat_marks2)
{
 cout<<"Roll Number 1 : " <<name1 <<endl;
 cout<<"Roll Number 2 : " <<name2 <<endl;
}

if(ecat_marks2 > ecat_marks1)
{
 cout<<"Roll Number 1 : " <<name2 <<endl;
 cout<<"Roll Number 2 : " <<name1 <<endl;
}

}