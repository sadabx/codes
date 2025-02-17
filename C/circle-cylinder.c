#include <stdio.h>

int main()
{
	float p = 3.1416, r, h;

	printf("Enter the radius of circle:");
	scanf("%f", &r);

	printf("The area of cicle is %f \n", p * r * r);

	printf("Enter the height of Cylinder:");
	scanf("%f", &h);

	printf("The area of cylinder is %f", p * r * r * h);
	return 0;
}