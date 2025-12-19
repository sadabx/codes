#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three value :");
	scanf("%d%d%d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			printf("The largest number is : %i", a);
		}
		else
		{
			printf("The largest number is : %i", c);
		}
	}
	else
	{
		if (b > c)
		{
			printf("The largest value is : %i", b);
		}
		else
		{
			printf("The largest number is : %i", c);
		}
	}

	return 0;
}
