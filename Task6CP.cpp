#include<iostream>
using namespace std;
void longestTime(int hours,int minutes);
main()
{
int hours;
int minutes;
cout<<"Enter the number of hours: ";
cin>>hours;
cout<<"Enter the number of minutes: ";
cin>>minutes;
longestTime(hours,minutes);
}
void longestTime(int hours,int minutes)
{
int minutes_per_hour;
minutes_per_hour=hours*60;
if(minutes_per_hour>minutes)
	cout<<hours;
if(minutes_per_hour<minutes)
	cout<<minutes;
}