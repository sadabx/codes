#include <stdio.h>

int main()
{
	int i = 1, sum = 0,n;
	char choice;
	printf("Enter n to calculate the sum up to n: ");
	scanf("%d",&n);
	printf("Choose a loop:\n");
	printf("A: While loop\n");
	printf("B: For loop\n");
	printf("C: Do-While loop\n");
	printf("Enter your choice (A, B, or C): ");
	scanf(" %c", &choice);
	if (choice == 'A' || choice == 'a')
	{
		while (i <= n)
		{
			sum += i; // sum= sum +i
			i++;
		}
		printf("The sum is %d", sum);
	}
	else if (choice == 'B' || choice == 'b')
	{
		for (i = 1; i <= n; i++)
		{
			sum += i;
		}
		printf("The sum is %d", sum);
	}
	else if (choice == 'C' || choice == 'c')
	{
		do
		{
			sum += i;
			i++;
		} while (i <= n);
		printf("The sum is %d", sum);
	}
	else
	{
		printf("Invalid choice\n");
	}
	return 0;
}