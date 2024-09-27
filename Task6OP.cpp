#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void H(int x,int y);
void A(int x,int y);
void S(int x,int y);
void N(int x,int y);
main()
{
system("cls");
int x=0,y=3;
gotoxy(x,y);
H(x,y);
y=y+6;
gotoxy(x,y);
A(x,y);
y=y+6;
gotoxy(x,y);
S(x,y);
y=y+6;
gotoxy(x,y);
S(x,y);
y=y+6;
gotoxy(x,y);
A(x,y);
y=y+6;
gotoxy(x,y);
N(x,y);
gotoxy(0,40);
}
void H(int x,int y)
{

cout<<"##  ##"<<endl;

cout<<"##  ##"<<endl;

cout<<"######"<<endl;

cout<<"##  ##"<<endl;

cout<<"##  ##"<<endl;

}
void A(int x,int y)
{

cout<<"######"<<endl;

cout<<"##  ##"<<endl;

cout<<"######"<<endl;

cout<<"##  ##"<<endl;

cout<<"##  ##"<<endl;

}
void S(int x,int y)
{

cout<<" #### "<<endl;

cout<<"##   #"<<endl;

cout<<"  ##  "<<endl;

cout<<"#   ##"<<endl;

cout<<" #### "<<endl;

}
void N(int x,int y)
{

cout<<"##   #"<<endl;

cout<<"###  #"<<endl;

cout<<"# ## #"<<endl;

cout<<"#  ###"<<endl;

cout<<"#   ##"<<endl;

}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}