#include <iostream>
#include <windows.h>
using namespace std;

void generateColors();

main()
{
  
  generateColors();
 
}





void generateColors()
{
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  
  //you can loop k higher to see more color choices
  for (int k = 1; k < 255; k++)
  {
    // pick the colorattribute k you want
     SetConsoleTextAttribute(hConsole, k);
    cout << k << " Try to give your Best!" << endl;
  }
}
/*HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

     SetConsoleTextAttribute(hConsole, k);
*/