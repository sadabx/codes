//To calculate the area of triangle,circle and cylinder 

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, s, h, area;
	float p = 3.1416, r;
	char choice;

	printf("What area do you want to calculate?\nA: Triangle\nB: Circle & Cylinder\n");
	printf("Enter your choice (A or B): ");
	scanf(" %c", &choice);

		if (choice == 'A' || choice == 'a')
	{
		//triangle 
		printf("\nWhich method do you want to use to calculate the area of a triangle?\n");
		printf("A: Base-Height Method\nB: Heron's Method\n");
		printf("Enter your choice (A or B): ");
		scanf(" %c", &choice);

		if (choice == 'A' || choice == 'a')
		{
			printf("Enter the base and height of the triangle: ");
			scanf("%f%f", &b, &h);
			area = 0.5 * b * h;
			printf("The area of the triangle is: %f\n", area);
		}
		else if (choice == 'B' || choice == 'b')
		{
			printf("Enter the three sides of the triangle: ");
			scanf("%f %f %f", &a, &b, &c);
			if (a + b > c && a + c > b && b + c > a)
			{
				s = (a + b + c) / 2;
				area = sqrt(s * (s - a) * (s - b) * (s - c));
				printf("The area of the triangle is: %f\n", area);
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
	}
	else if (choice == 'B' || choice == 'b')
	{
		//circle
		printf("Enter the radius of the circle: ");
		scanf("%f", &r);

		printf("The area of the circle is: %f\n", p * r * r);
		
		//cylinder
		printf("Enter the height of the cylinder: ");
		scanf("%f", &h);

		printf("The volume of the cylinder is: %f\n", p * r * r * h);
	}
	else
	{
		printf("Invalid choice. Please enter 'A' or 'B'.\n");
	}

	return 0;
}