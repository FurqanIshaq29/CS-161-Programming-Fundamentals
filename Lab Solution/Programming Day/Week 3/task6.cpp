#include<iostream>
using namespace std;
int main()
{
float si_po,co_bag,area,cost_po,cost_area;

cout<<"Enter size of fertilizer bag in pounds : ";
cin>>si_po;
cout<<"Enter the cost of the bag : ";
cin>>co_bag;
cout<<"Enter area covered by each bag in square feet : ";
cin>>area;

cost_po = co_bag/si_po;
cost_area = co_bag/area;

cout<<"Cost of fertilizer per pound : " <<cost_po <<endl ;
cout<<"Cost of fertilizer per square feet : " <<cost_area;
return 0;
}