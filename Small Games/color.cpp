#include <iostream>
#include <windows.h>
using namespace std;
void generatecolours();

void generateColors();

main()
{
  generatecolours();
  // generateColors();
}

void generatecolours()
{
  char i;
  for (i = 0; i < 256; i++)
  {
    cout << i <<endl;
  }
}

void generateColors()
{
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  for (int k = 1; k < 255; k++)
  {
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " Try to give your Best!" << endl;
  }
}