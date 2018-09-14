#include <stdio.h>
 
void main()
{
 int i, num, sum_of_odd = 0, sum_of_even = 0;
 
 printf("Enter the value of num\n");
 scanf("%d", &num);
 for (i = 1; i <= num; i++)
 {
 if (i % 2 == 0)
 sum_of_even = sum_of_even + i;
 else
 sum_of_odd = sum_of_odd + i;
 }
 printf("Sum of all odd numbers = %d\n", sum_of_odd);
 printf("Sum of all even numbers = %d\n", sum_of_even);
}