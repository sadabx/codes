#include <stdio.h>

int main()
{
	//p=principle investment
	//r=rate of interest
	//t=time
	float p, r, t;

	printf("Enter the values (p,r,t) :");
	scanf("%f %f %f", &p, &r, &t);

	printf("The interest will be %f", (p * r * t) / 100);

	return 0;
}