#include<iostream>
using namespace std;
void IsEqual(int num1,int num2);
main()
{
int num1,num2;
cout<<"Enter 1st Number: ";
cin>>num1;
cout<<"Enter 2nd Number: ";
cin>>num2;
IsEqual(num1,num2);
}
void IsEqual(int num1,int num2)
{
if(num1==num2)
	cout<<"True";
if(num1!=num2)
	cout<<"False";
}