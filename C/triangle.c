#include <stdio.h>
#include <math.h>

int main()
{
	float b, h, area;
	float a, c, s;
	char choice;

	printf("Which method do you want to use to calculate the area of a triangle? \nA: Base-Height Method \nB: Heron's Method \n");
	printf("Enter your choice (A or B): ");
	scanf("%c", &choice);

	if (choice == 'A' || choice == 'a')
	{
		printf("Enter the base and height of the triangle: ");
		scanf("%f%f", &b, &h);
		area = 0.5 * b * h;
		printf("The area of the triangle is: %.2f\n", area);
	}
	else if (choice == 'B' || choice == 'b')
	{
		printf("Enter the three sides of the triangle: ");
		scanf("%f %f %f", &a, &b, &c);
		if (a + b > c && a + c > b && b + c > a)
		{
			s = (a + b + c) / 2;
			area = sqrt(s * (s - a) * (s - b) * (s - c));
			printf("The area of the triangle is: %.2f\n", area);
		}
		else
		{
			printf("The given sides do not form a valid triangle.\n");
		}
	}
	else
	{
		printf("Invalid choice. Please enter 'A' or 'B'.\n");
	}

	return 0;
}