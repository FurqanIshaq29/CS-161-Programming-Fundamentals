#include <iostream>
#include <windows.h>
using namespace std;

char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

char e1nemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char e1nemy2[6] = {'<', '=', '=', '(', '-', ')'};
char e1nemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char e1nemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

char e2nemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char e2nemy2[6] = {'<', '=', '=', '(', '-', ')'};
char e2nemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char e2nemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

int bulletX[100];
int bulletY[100];
int bulletCount = 0;

int tankX = 5;
int tankY = 5;

int e1nemyX = 30;
int e1nemyY = 10;

int e2nemyX = 20;
int e2nemyY = 10;

string enemyDirection1 = "Up";
string enemyDirection2 = "Down";

int timer1 = 0;
int timer2 = 0;

int score = 0;

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
void printTank();
void eraseTank();
void printMaze();
void moveBullet();
void generateBullet();
void removeBulletFromArray(int index);
void moveTankUp();
void moveTankDown();
void moveTankLeft();
void moveTankRight();

void moveEnemy1();
void moveEnemy2();
void generateBulletEnemy1();
void generateBulletEnemy2();

void printEnemy1();
void printEnemy2();
void eraseEnemy1();
void eraseEnemy2();

void addScore();
void printScore();

void bulletCollisionWithEnemy();
void printBullet(int x, int y);
void eraseBullet(int x, int y);

main()
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 6);
    printMaze();
    printTank();
    printEnemy1();
    while (true)
    {
        printScore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            moveTankLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            moveTankRight();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            moveTankUp();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            moveTankDown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }

        if (timer1 == 3)
        {
            moveEnemy1();
            generateBulletEnemy1();
            moveEnemy2();
            generateBulletEnemy2();
            timer1 = 0;
        }
        moveBullet();
        bulletCollisionWithEnemy();
        timer1++;
        
        Sleep(90);
    }
}

void printScore()
{
    gotoxy(65, 8);
    cout << "Score: " << score;
}

void moveEnemy1()
{

    if (enemyDirection1 == "Up")
    {
        char next = getCharAtxy(e1nemyX, e1nemyY - 1);
        if (next == ' ')
        {
            eraseEnemy1();
            e1nemyY--;
            printEnemy1();
            generateBulletEnemy1();
        }
        if (next == '#')
        {
            enemyDirection1 = "Down";
        }
    }
    if (enemyDirection1 == "Down")
    {
        char next = getCharAtxy(e1nemyX, e1nemyY + 4);
        if (next == ' ')
        {
            eraseEnemy1();
            e1nemyY = e1nemyY + 1;
            printEnemy1();
        }
        if (next == '#')
        {
            enemyDirection1 = "Up";
        }
    }
}

// for enemy2
void moveEnemy2()
{

    if (enemyDirection2 == "Up")
    {
        char next = getCharAtxy(e2nemyX, e2nemyY - 1);
        if (next == ' ')
        {
            eraseEnemy2();
            e2nemyY--;
            printEnemy2();
        }
        if (next == '#')
        {
            enemyDirection2 = "Down";
        }
    }
    if (enemyDirection2 == "Down")
    {
        char next = getCharAtxy(e2nemyX, e2nemyY + 4);
        if (next == ' ')
        {
            eraseEnemy2();
            e2nemyY = e2nemyY + 1;
            printEnemy2();
        }
        if (next == '#')
        {
            enemyDirection2 = "Up";
        }
    }
}

void printEnemy1()
{
    gotoxy(e1nemyX, e1nemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << e1nemy1[index];
    }
    gotoxy(e1nemyX, e1nemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << e1nemy2[index];
    }
    gotoxy(e1nemyX, e1nemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << e1nemy3[index];
    }
    gotoxy(e1nemyX, e1nemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << e1nemy4[index];
    }
}

// print enemy2

void printEnemy2()
{
    gotoxy(e2nemyX, e2nemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << e2nemy1[index];
    }
    gotoxy(e2nemyX, e2nemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << e2nemy2[index];
    }
    gotoxy(e2nemyX, e2nemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << e2nemy3[index];
    }
    gotoxy(e2nemyX, e2nemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << e2nemy4[index];
    }
}

void eraseEnemy1()
{
    gotoxy(e1nemyX, e1nemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e1nemyX, e1nemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e1nemyX, e1nemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e1nemyX, e1nemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

// erase enemy2
void eraseEnemy2()
{
    gotoxy(e2nemyX, e2nemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e2nemyX, e2nemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e2nemyX, e2nemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(e2nemyX, e2nemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void moveTankLeft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX - 1;
        printTank();
    }
}

void moveTankRight()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if (next == ' ')
    {
        eraseTank();
        tankX = tankX + 1;
        printTank();
    }
}

void moveTankUp()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY - 1;
        printTank();
    }
}

void moveTankDown()
{
    char next = getCharAtxy(tankX, tankY + 2);
    if (next == ' ')
    {
        eraseTank();
        tankY = tankY + 1;
        printTank();
    }
}

void generateBullet()
{
    bulletX[bulletCount] = tankX + 7;
    bulletY[bulletCount] = tankY;
    gotoxy(tankX + 7, tankY);
    cout << ".";
    bulletCount++;
}

void removeBulletFromArray(int index)
{
    for (int x = index; x < bulletCount - 1; x++)
    {
        bulletX[x] = bulletX[x + 1];
        bulletY[x] = bulletY[x + 1];
    }
    bulletCount--;
}

void printTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << tank1[index];
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << tank2[index];
    }
}

void eraseTank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
    cout << "############################################################################" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "#                                                                          #" << endl;
    cout << "############################################################################" << endl;
}

void moveBullet()
{
    for (int x = 0; x < bulletCount; x++)
    {
        char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
        if (next != ' ')
        {
            eraseBullet(bulletX[x], bulletY[x]);
            removeBulletFromArray(x);
        }
        else
        {
            eraseBullet(bulletX[x], bulletY[x]);
            bulletX[x] = bulletX[x] + 1;
            printBullet(bulletX[x], bulletY[x]);
        }
    }
}

void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void bulletCollisionWithEnemy()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for (int x = 0; x < bulletCount; x++)
    {
        if (bulletX[x] + 1 == e1nemyX && (bulletY[x] == e1nemyY || bulletY[x] == e1nemyY + 1 || bulletY[x] == e1nemyY + 2 || bulletY[x] == e1nemyY + 3))
        {
            addScore();
            eraseBullet(bulletX[x], bulletY[x]);
            removeBulletFromArray(x);
        }

        if (bulletX[x] + 1 == e2nemyX && (bulletY[x] == e2nemyY || bulletY[x] == e2nemyY + 1 || bulletY[x] == e2nemyY + 2 || bulletY[x] == e2nemyY + 3))
        {
            addScore();
            eraseBullet(bulletX[x], bulletY[x]);
            removeBulletFromArray(x);
        }
    }
}

void addScore()
{
    score++;
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void generateBulletEnemy1()
{
    
    gotoxy(e1nemyX - 1, e1nemyY);
    cout << ".";
  
}

void generateBulletEnemy2()
{
    
    gotoxy(e2nemyX - 1, e2nemyY);
    cout << ".";
  
}