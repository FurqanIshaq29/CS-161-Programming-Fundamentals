#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void A();
void W();
void AA();
void I();
void S();

int main()
{
int x = 5;
int y = 2;
system("cls");
 gotoxy(x,y);
A();

 gotoxy(x,y+1);
W();
 gotoxy(x,y+2);
AA();

 gotoxy(x,y+3);
I();

 gotoxy(x,y+4);
S();


}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void A()
{
 cout<<"A";
 Sleep(200);

}

void W()
{
 cout<<"W";
 Sleep(200);
}
void AA()
{
 cout<<"A";
 Sleep(200);
}

void I()
{
 cout<<"I";
 Sleep(200);
}

void S()
{
 cout<<"S";
 Sleep(200);
}
