#include<iostream>
#include<windows.h>
using namespace std;

void playerMove(int x,int y);
void gotoxy(int x,int y);
void printMaze();

int main()
{
system("cls");
printMaze();
int x= 27;
int y = 9;
while(true)
{
 playerMove(x,y);
 
 if ( y < 24)
  {
   y = y +1;
  }
 if(y == 22)
   {
    gotoxy(x,y-1);
    cout<<" ";
     y = 9;
    }
}
 

}


void playerMove(int x,int y)
{
   gotoxy(x,y-1);
   cout<<" ";
 Sleep(300);
  gotoxy(x,y);
  cout<<"P";
Sleep(300);

}


void printMaze()
{
cout<<"###############################################################" <<endl;
cout<<"||.. .............................................  .......  ||" <<endl;
cout<<"||.. %%%%%%%%%%%%%%       ...     %%%%%%%%%%%  |%|..  %%%%   ||" <<endl; 
cout<<"||..      |%|   |%|    |%|...     |%|     |%|  |%|..   |%|   ||" <<endl;
cout<<"||..      |%|   |%|    |%|...     |%|     |%|  |%|..   |%|   ||" <<endl;
cout<<"||..      %%%%%%%%  . .|%|...     %%%%%%%%%%%     ..  %%%%.  ||" <<endl;                                                        
cout<<"||..      |%|       . .|%|...    ............ |%| ..      .  ||" <<endl;                                              
cout<<"||..      %%%%%%%%%%. .|%|...    %%%%%%%%%    |%| ..  %%%%.  ||" <<endl;
cout<<"||..             |%|.            |%|...       |%| ..   |%|.  ||" <<endl;
cout<<"||..    .........|%|.            |%|...|%|        ..   |%|.  ||" <<endl;
cout<<"||..|%| |%|%%|%|.|%|. |%|           ...|%|        ..|%||%|.  ||" <<endl;
cout<<"||..|%| |%|  |%|..    %%       %%%  ...|%|         .|%|.     ||" <<endl;
cout<<"||..|%| |%|  |%|..          ...|%|   %%%%%        . |%|.     ||" <<endl;
cout<<"||..|%|          .          ...|%|            |%| ..|%|.     ||" <<endl;
cout<<"||..    %%%%%%%%%%%%        ...|%|%%%%%%%     |%| ..|%|%%%%  ||" <<endl;
cout<<"||........................................    |%| .........  ||" <<endl;
cout<<"||   .....................................           ......  ||" <<endl;
cout<<"||..|%| |%|  |%|..    %%%      %%%  ..|%|     |%| ..|%|.     ||" <<endl;
cout<<"||..|%| |%|  |%|..          ...|%|   %%%%     |%| ..|%|.     ||" <<endl;
cout<<"||..|%|          .     G    ...|%|            |%| ..|%|.     ||" <<endl;
cout<<"||..|%| %%%%%%%%%%%%%       ...|%|%%%%%%      |%| ..|%|%%%%  ||" <<endl;
cout<<"||.......................................     |%| .........  ||" <<endl;
cout<<"||  .....................................            ......  ||" <<endl;
cout<<"###############################################################" <<endl;
}


void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}