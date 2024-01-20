#include<iostream>
using namespace std;
int main()
{
string mov_nam;
float ad_tic,chi_tic,nAd_tic,nChi_tic,per,tot_ad,tot_ch,tot_am,cal_per,am_rem;
cout<<"Enter movie name : ";
cin>>mov_nam;
cout<<"Enter the adult ticket price : ";
cin>>ad_tic;
cout<<"Enter the child ticket price : ";
cin>>chi_tic;
cout<<"Enter the number of adult tickets sold : ";
cin>>nAd_tic;
cout<<"Enter the number of child tickets sold : ";
cin>>nChi_tic;
cout<<"Percentage of the amount to be donated to charity : ";
cin>>per;

tot_ad=ad_tic*nAd_tic;
tot_ch=chi_tic*nChi_tic;
tot_am = tot_ad + tot_ch;
cal_per = (per/100)*tot_am;
am_rem = tot_am - cal_per;


cout<<"Total Amount Generated : " << tot_am << endl;
cout<<"Amount after donation : " << am_rem;

return 0;
}