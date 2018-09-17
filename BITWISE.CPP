//multiply a number by 4 using bitwise
#include <stdio.h>
#include<conio.h>
 
void main()
{clrscr();                          s
    longnumber, tempnum ;

    printf("Enter an integer \n");
    scanf("%ld", &number;
    tempnum = number;

    number = number << 2;
    printf("%ld x 4 = %ld\n", tempnum, number);
}