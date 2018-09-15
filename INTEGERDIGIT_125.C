#include <stdio.h>
#include<conio.h>
 
int main()
{
    int number, sum = 0, remainder, count;
 
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number)
    {
        remainder = number % 10;
        sum  = sum + (remainder + 1);
        number /= 10;
    }
    printf("increasing 1 to all digits:  %d", sum);
    getch();
return 0;
}