#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int celsius;
float fahrenheit;
printf("\nEnter the celsius");
scanf("%d",&celsius);
fahrenheit = ((celsius * 1.8) +32);
printf("\nThe fahrenheit is: %f",fahrenheit);
getch();
}