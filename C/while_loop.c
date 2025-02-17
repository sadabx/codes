#include <stdio.h>

int main()
{
	int i = 0, n;
	printf("Enter the value of 'n':");
	scanf("%d", &n);
	while (i < n)
	{
		i++;
		printf("I love you %d\n", i);
	}
	return 0;
}