#include<iostream>
using namespace std;
void possibleBonus(int You,int Friend);
main()
{
int You;
cout<<"Enter your position: ";
cin>>You;
int Friend;
cout<<"Enter your friend's position: ";
cin>>Friend;
possibleBonus(You,Friend);
}
void possibleBonus(int You,int Friend)
{
int distance;
distance=Friend-You;
if(distance<=6)
	cout<<"True";
if(distance>6)
	cout<<"False";
}