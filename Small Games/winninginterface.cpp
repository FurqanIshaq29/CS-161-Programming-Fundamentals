#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
using namespace std;
char a = 219;
char box2 = 177;
void winningInterface()
{
    cout << "\n\n\n\n";
    cout << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << a << endl;
    cout << "\n\n";
    cout << a << "   " << a << " " << a << a << a << a << " " << a << "   " << a << " " << a << "  " << a << "  " << a << " " << a << a << a << " " << a << a << a << " " << a << endl;
    cout << a << "   " << a << " " << a << "  " << a << " " << a << "   " << a << " " << a << "  " << a << "  " << a << " "
         << " " << a << "  " << a << " " << a << " " << a << endl;
    cout << a << a << a << a << a << " " << a << "  " << a << " " << a << "   " << a << " " << a << "  " << a << "  " << a << " "
         << " " << a << "  " << a << " " << a << " " << a << endl;
    cout << "  " << a << "  "
         << " " << a << "  " << a << " " << a << "   " << a << " " << a << "  " << a << "  " << a << " "
         << " " << a << "  " << a << " " << a << " " << a << endl;
    cout << "  " << a << "  "
         << " " << a << a << a << a << " " << a << a << a << a << a << " " << a << a << a << a << a << a << a << " " << a << a << a << " " << a << " " << a << a << a << endl;
}

void topHeader()
{
    cout << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << endl;
    cout << box2 << box2 << box2 << "                                                                                             " << box2 << box2 << box2 << endl;
    cout << "       " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << "    " << a << a << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << "  " << a << a << " " << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << endl;
    cout << "       " << a << a << "      "
         << " " << a << a << "    " << a << a << " " << a << a << "      "
         << " "
         << "   " << a << a << "   "
         << "    " << a << a << "  " << a << a << "  " << a << a << " " << a << a << "    " << a << a << " " << a << a << "  " << a << a << "  " << a << a << " "
         << "  " << a << a << "  "
         << " " << a << a << "    " << a << a << endl;
    cout << "       " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << " " << a << a << a << a << a << a << a << a << " "
         << "   " << a << a << "   "
         << "    " << a << a << "  " << a << a << "  " << a << a << " " << a << a << a << a << a << a << a << a << " " << a << a << "  " << a << a << "  " << a << a << " "
         << "  " << a << a << "  "
         << " " << a << a << a << a << a << a << a << a << endl;
    cout << "       " << a << a << "      "
         << " " << a << a << "    " << a << a << " "
         << "      " << a << a << " "
         << "   " << a << a << "   "
         << "    " << a << a << "  " << a << a << "  " << a << a << " " << a << a << "    " << a << a << " " << a << a << "  " << a << a << "  " << a << a << " "
         << "  " << a << a << "  "
         << " " << a << a << "    " << a << a << endl;
    cout << "       " << a << a << "      "
         << " " << a << a << "    " << a << a << " " << a << a << a << a << a << a << a << a << " "
         << "   " << a << a << "   "
         << "    " << a << a << "  " << a << a << "  " << a << a << " " << a << a << "    " << a << a << " " << a << a << "  " << a << a << a << a << a << a << " " << a << a << a << a << a << a << " " << a << a << "    " << a << a << endl;
    cout << box2 << box2 << box2 << "                                                                                             " << box2 << box2 << box2 << endl;
    cout << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << box2 << endl;
}
void getCharacter()
{
    cout << "\n\n\n";
    cout << "Press any key to continue.......";
    getch();
}
int main()
{
    system("cls");
    topHeader();
    winningInterface();
    getCharacter();
}
