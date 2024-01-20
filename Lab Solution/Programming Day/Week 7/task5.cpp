#include <iostream>
using namespace std;

// number of triangles dots
int triangle(int sequence);
int main()
{
    int sequence;
 
    cout << "Enter the number sequence : ";
    cin >> sequence;
    int dots = triangle(sequence);
    cout<<dots;
   
}

int triangle(int sequence)
{
       int sum = 0 ;
    for (int i = sequence; i > 0; i--)
    {
        sum = sum + i;
  
    }
    return sum;
}