#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int firstNum,secondNum;
float quotient;
printf("\nEnter the two numbers");
scanf("%d %d",&firstNum,&secondNum);
quotient = firstNum/secondNum;
printf("\nThe quotient is:%f",quotient);
getch();
}