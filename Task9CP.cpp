#include<iostream>
using namespace std;
void tpChecker(int peoples,int rolls);
main()
{
int people;
cout<<"Number of people in a household: ";
cin>>people;
int rolls;
cout<<"Number of rolls of TP: ";                           //TP=Tissue Paper
cin>>rolls;
tpChecker(people,rolls);
}
void tpChecker(int people,int rolls)
{
int total_sheets=rolls*500;
int sheet_used_per_day=57*people;
int days=total_sheets/sheet_used_per_day;                  //TP will last for following days.
if(days<14)
	{
	 cout<<"Your TP will last "<<days<<" days, buy more!"<<endl;
	}
if(days>=14)
	{
	 cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
}