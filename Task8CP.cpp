#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
int holidays;
cout<<"Holidays: ";
cin>>holidays;
pet(holidays);
}
void pet(int holidays)
{
int working_days=365-holidays;
int time_for_games=63*working_days+127*holidays;
int norm=30000;
if(time_for_games<=norm)
	{
	 int difference_from_norm=norm-time_for_games;                                     //total difference in minutes
	 int difference_from_NORM_h=(difference_from_norm/60);                             //hours
	 int difference_from_NORM_m=(difference_from_norm%60);      //minutes
	 cout<<"Tom sleeps well."<<endl;
	 cout<<difference_from_NORM_h<<" hours and "<<difference_from_NORM_m<<" minutes less for play.";
	}
if(time_for_games>norm)
	{
	 int difference_from_norm=time_for_games-norm;                                     //total difference in minutes
	 int difference_from_NORM_h=(difference_from_norm/60);                             //hours
	 int difference_from_NORM_m=(difference_from_norm%60);      //minutes
	 cout<<"Tom runs away."<<endl;
	 cout<<difference_from_NORM_h<<" hours and "<<difference_from_NORM_m<<" more for play.";
	}
}