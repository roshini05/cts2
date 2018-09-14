#include <stdio.h>

//swap function for swaping the value.
void swap(int *ptr1, int *ptr2);

int main() {

	int num1, num2;
	
	printf("Enter two number: ");
	scanf("%d %d", &num1, &num2);

	printf("before swaping M: %d\t N: %d,", num1, num2);
	printf("\n");

	swap(&num1, &num2);

	printf("after swaping M: %d\t N: %d,", num1, num2);
	printf("\n");

	return 0;
}

//swap function for swaping the value.
void swap(int *ptr1, int *ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}