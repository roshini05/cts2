#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int firstNum,secondNum,sum,product;
printf("\nEnter the first and second numbers");
scanf("%d %d",&firstNum,&secondNum);
sum = firstNum+secondNum;
product = firstNum*secondNum;
printf("sum is: %d and product is: %d",sum,product);
getch();
}
