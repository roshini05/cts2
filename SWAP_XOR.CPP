#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1=4,n2=5;
printf("before swap: n1:%d \t n2:%d \n",n1,n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("after swap: n1:%d \t n2:%d",n1,n2);
getch();
}