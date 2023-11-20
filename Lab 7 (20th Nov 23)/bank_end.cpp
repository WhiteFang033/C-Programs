//Program to store bank details of a customer and process the transaction
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct customer {
	int account_number;
	char name[50];
	int balance;
}bank[10];

int transaction(int account_number, int request_type, int amount, struct customer bank[]);

int main()
{
	int request, amt, acc_no, i;
	printf("Enter the bank details of 5 customers...\n");
	
	for(i = 0; i<5; i++)
	{
		printf("Enter the details of user %d\n\n", i+1);
		
		printf("Enter Account Number: \n");
		scanf("%d",&bank[i].account_number);
		
		printf("Enter the Name of Account Holder: \n");
		fflush(stdin);
		gets(bank[i].name);
		
		printf("Enter the Current Balance: \n");
		scanf("%d",&bank[i].balance);
	}
	
	//Transaction Begins
	printf("Enter you Account Number.\n");
	scanf("%d",&acc_no);
	for(i = 0; i<10; i++)
	{
		if(acc_no == bank[i].account_number)
		{
			printf("Welcome %s", bank[i].name);
			break;
		}
	}
	
	printf("Enter 0 to deposit.\nEnter 1 for withdrawal.\n");
	scanf("%d", &request);
	
	
	if(request)
		printf("Enter the amount to be withdrawed.\n");
	else
		printf("Enter the amount to be deposited.\n");
	
	scanf("%d", &amt);
	
	
	
	int result = transaction(acc_no, request, amt, bank);
	
	if(result)
    	printf("Transaction Unsuccessful. Unsufficient Balance.\n");
    else
    	printf("Transaction Successful.\n");
	
	return 0;
}

int transaction(int account_number, int request_type, int amount, struct customer bank[])
{
	int i;
	for(i = 0; i<10; i++)
	{
		if(account_number == bank[i].account_number)
		{
			break;
		}
	}
	
	if(bank[i].balance >= amount)
	{
		bank[i].balance -=amount;
		return 1;
	}
	else if(bank[i].balance < amount)
	{
		return 0;
	}
}

