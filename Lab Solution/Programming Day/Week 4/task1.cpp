#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);

int main()
{
system("cls");
cout<<"Text";
gotoxy(15,15);
cout<<"My name is Muhammad Furqan.";
return 0;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
