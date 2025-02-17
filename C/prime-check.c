#include <stdio.h>

int main()
{
	int not_prime = 0, n;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n == 0 || n == 1)
	{
		printf("%d is not a prime number", n);
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0 || n != 2)
			{
				not_prime = 1;
				break;
			}
		}

		if (not_prime)
		{
			printf("%d is not a prime number", n);
		}
		else
		{
			printf("%d is a prime number", n);
		}
	}
	return 0;
}