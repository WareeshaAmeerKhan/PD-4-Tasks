#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{
int x=40,y=20;
gotoxy(x,y);
cout<<"**    **     *****     *****     ******     ******         ****    **  **    *****  "<<endl;
y=y+1;
gotoxy(x,y);
cout<<"** ** **    **   **    ** **     **         **            **   *   **  **   **   ** "<<endl;
y=y+1;
gotoxy(x,y);
cout<<"***  ***    *******    ****      *****      *****           **     ******   ******* "<<endl;
y=y+1;
gotoxy(x,y);
cout<<"**    **    **   **    ** **     **         **            *   **   **  **   **   ** "<<endl;
y=y+1;
gotoxy(x,y);
cout<<"*      *    **   **    **  **    ******     ******         ****    **  **   **   ** "<<endl;
}
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}