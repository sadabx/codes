#include <stdio.h>

int main()
{
	int factorial = 1, n;
	//!3= 1 X2 X3
	printf("Whose factorial u want to know?\n");
	scanf(" %d", &n);

	for (int i = 1; i <= n; i++)
	{
		factorial *= i; //f=f*i
	}

	/*
	int i = 1;
	while (i <= n)
	{
		factorial *= i;
		i++;
	}
	*/
	printf("The factorial of %d is %d", n, factorial);
	return 0;
}