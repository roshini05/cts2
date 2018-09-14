#include<stdio.h>
#include<conio.h>
void main()
{
long metre,km;
printf("\nEnter the km value:");
scanf("%ld",&km);
metre = km * 1000;
printf("\nThe metre value equivalent to km is %ld",metre);
getch();
}