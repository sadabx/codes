#include <stdio.h>

int main()
{
	float c, f, k;
	char choice;

	printf("What do u want to convert from? \nA:Celcius \nB:Fahrenheit\n");
	printf("Enter your choice (A or B): ");
	scanf("%c", &choice);

	if (choice == 'A' || choice == 'a')
	{
		printf("Enter the temperature in Celcius: ");
		scanf("%f", &c);

		printf("Converted temperature in Fahrenheit and Kelvin is %f %f", f = ((9.0 / 5.0) * c + 32), k = c + 273);
	}
	else if (choice == 'B' || choice == 'b')
	{
		printf("Enter the temperature in Fahrenheit : ");
		scanf("%f", &f);

		printf("Converted temperature in Celcius and kelvin is %f %f", c = ((f - 32) * 5.0 / 9), k = c + 272);
	}
	else
	{
		printf("Your input is not valid");
	}

	return 0;
}