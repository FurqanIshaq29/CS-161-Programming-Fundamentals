#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMaze();
void playerMove(int x,int y);

int main()
{
system("cls");
printMaze();
int x = 4;
int y = 3;
playerMove(x,y);
   
return 0;
}

void printMaze()
{
cout<<"#######################" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#                     #" <<endl;
cout<<"#######################" <<endl;

}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x,int y)
{
 gotoxy(x-1,y);
 cout<<" ";
 Sleep(3000);
 gotoxy(x,y);
 cout<<"P";
 Sleep(3000);
}
