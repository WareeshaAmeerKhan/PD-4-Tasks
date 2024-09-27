#include<iostream>
using namespace std;
void Reverse(string condition);
main()
{
string condition;
cout<<"Enter 'true' or 'false': ";
cin>>condition;
Reverse(condition);
}
void Reverse(string condition)
{
if(condition=="true")
	cout<<"false";
if(condition=="false")
	cout<<"true";
}