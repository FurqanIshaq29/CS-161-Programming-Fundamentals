#include<iostream>
using namespace std;

void carSpeed(int speed);

int main()
{
int speed;
cout<<"Enter the speed of the car : ";
cin>>speed;
carSpeed(speed);
}

void carSpeed(int speed)
{
if(speed > 100)
{
cout<<"Halt....YOU WILL BE CHALLENGED!!!" <<endl;
}
if(speed <= 100)
{

cout<<"Perfect!You're doing good" <<endl;

}

}