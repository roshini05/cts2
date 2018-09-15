#include <stdio.h>
#include<conio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
clrscr();
{
    int num1 = 10, num2 = 20;

    printf("Before swapping num1 = %d num2 = %d\n", num1, num2);
    swap(num1, num2);
    printf("After swapping num1 = %d num2 = %d \n", num1, num2);
    getch();
    return 0;
}