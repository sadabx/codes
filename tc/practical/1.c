// Write a C program to find area and circumference of a circle (use symbolic constant).
#include <stdio.h>

int main()
{
    float pi = 3.1416, r;

    printf("Enter value of radius: ");
    scanf("%f", &r);

    // area
    float area = pi * r * r;
    printf("area of circle is %.2f \n", area);

    // circumference
    float ans = 2 * pi * r;
    printf("circumference of circle is %.2f", ans);

    return 0;
}
