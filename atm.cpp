#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
 
unsigned long amount=1000, deposit, withdraw;
int choice, pin, k;
char transaction ='y';
 
int main()
{
	clrscr();
	while (pin != 1520)
	{
		printf("ENTER YOUR SECRET PIN NUMBER:");
		scanf("%d", &pin);
		if (pin != 1520)
		{
			printf("PLEASE ENTER VALID PASSWORD\n");
			getch();
			// Exit() is declared in stdlib header file
			// you must need to include  header file at the top
			exit(1);
		}
	}
	do
	{
		//Display Menu
		printf("********Welcome to ATM Service**************\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw Cash\n");
		printf("3. Deposit Cash\n");
		printf("4. Quit\n");
		printf("******************?**************************?*\n\n");
		printf("Enter your choice: ");
		// Accept Choice
		scanf("%d", &choice);
 
		switch (choice)
		{
			case 1:
				//View Check BALANCE
				printf("\n YOUR BALANCE IN Rs : %lu ", amount);
				break;
 
			case 2:
				// Enter Withdraw Cash
				printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
				scanf("%lu", &withdraw);
				if (withdraw % 100 != 0)
				{
					printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
				}
				else if (withdraw >(amount - 500))
				{
					printf("\n INSUFFICENT BALANCE");
				}
				else
				{
					amount = amount - withdraw;
					printf("\n\n PLEASE COLLECT CASH");
					printf("\n YOUR CURRENT BALANCE IS%lu", amount);
				}
				break;
 
			case 3:
				// Deposit CASH
				printf("\n ENTER THE AMOUNT TO DEPOSIT");
				scanf("%lu", &deposit);
				amount = amount + deposit;
				printf("YOUR BALANCE IS %lu", amount);
				break;
 
			case 4:
				// Quit
				printf("\n THANK U USING ATM");
				break;
 
			default:
				printf("\n INVALID CHOICE");
		}
 
		
		printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		fflush(stdin);
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
		{
			k = 1;
		}
	} while (!k);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
 
	getch();
	return 0;
}