#include<iostream.h>
#include<conio.h>
void main()
{
int firstNum,secondNum,thirdNum;
clrscr();
cout<<"Enter the three numbers";
cin>>firstNum>>secondNum>>thirdNum;
if(firstNum>secondNum&&firstNum>thirdNum)
{
cout<<"\n"<<"the greatest of three numbers is"<<firstNum;
}
else if(secondNum>firstNum&&secondNum>thirdNum)
{
cout<<"\n"<<"the greatest of three numbers is"<<secondNum;
}
else
{
cout<<"\n"<<"the greatest of three numbers is"<<thirdNum;
}
getch();
}