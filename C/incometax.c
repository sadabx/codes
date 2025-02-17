#include <stdio.h>

int main()
{
	int income;
	float tax;

	printf("Enter your monthly income: ");
	scanf("%d", &income);
	
	if (250000 < income < 500000)
	{
		tax = 0.05 * (income - 250000);
		printf("Tax: %.2f ", tax);
	}
	else if (500000 < income < 1000000)
	{
		tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
		printf("Tax: %.2f", tax);
	}
	else if (income > 1000000)
	{
		tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
		printf("Tax: %.2f", tax);
	}
	return 0;
}