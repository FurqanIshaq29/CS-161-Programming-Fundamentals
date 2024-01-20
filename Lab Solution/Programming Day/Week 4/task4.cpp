#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMaze();
void playerMove(int x,int y);
//22
int main()
{
system("cls");
printMaze();
  int x = 4;
   int y = 3;
while(true)
{
 playerMove(x,y);
 if(x < 22)
   {
    x = x+1;
   }
  if(x == 22)
    {
     gotoxy(x-1,y);
     cout<<" ";
     x=3;

    }
}
     
 
   
   
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
 Sleep(300);
 gotoxy(x,y);
 cout<<"P";
 Sleep(300);
}
