#include <stdio.h>

int main()
{
	int marks;

	printf("Enter your marks: ");
	scanf("%d", &marks);

	if (80 <= marks && marks <= 100)
	{
		printf("Your grade is A+");
	}
	else if (70 <= marks && marks < 80)
	{
		printf("Your grade is A");
	}
	else if (60 <= marks && marks < 70)
	{
		printf("Your grade is A-");
	}
	else if (50 <= marks && marks < 60)
	{
		printf("Your grade is B");
	}
	else if (40 <= marks && marks < 50)
	{
		printf("Your grade is C");
	}
	else if (33 <= marks && marks < 40)
	{
		printf("Your grade is D");
	}
	else
	{
		printf("You Failed!");
	}
	return 0;
}