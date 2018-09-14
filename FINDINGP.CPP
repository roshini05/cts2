#include<iostream.h>
#include<conio.h>
int prod(int,int);
void main()
{
int firstNum,secondNum;
clrscr();
cout<<"Enter the first two numbers";
cin>>firstNum>>secondNum;
cout<<"\n"<<"The sum of two number is"<<prod(firstNum,secondNum);
getch();
}
int prod(int firstNo,int secondNo)
{
if(secondNo>0)
{
return firstNo + prod(firstNo,secondNo-1);
}
else
{
return 0;
}
}