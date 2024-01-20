#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);

int main()
{
int x = 20;
 int y = 20;
 gotoxy(x,y);
 cout<<"MUHAMMAD FURQAN ISHAQ";



}


void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}