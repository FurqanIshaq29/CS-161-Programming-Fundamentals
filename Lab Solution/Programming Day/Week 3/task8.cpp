#include<iostream>
using namespace std;
int main()
{
float veg_pri,fri_pri,kg_veg,kg_fri,veg,fri,tot,tot_rup;

cout<<"Enter vegetable price per kg : ";
cin>>veg_pri;
cout<<"Enter fruit price per kg : ";
cin>>fri_pri;
cout<<"Total kgs of vegetables : ";
cin>>kg_veg;
cout<<"Total kgs of fruits : ";
cin>>kg_fri;
veg = veg_pri * kg_veg;
fri = fri_pri * kg_fri;
tot = veg + fri;
tot_rup = tot / 1.94;
cout<<"Total earning of the harvest in rupees : " <<tot_rup;
return 0;
}


