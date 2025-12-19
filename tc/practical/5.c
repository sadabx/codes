// Write a C program to find all possible roots of ax^2+bx+c=0.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2;

    printf("Enter the values of a,b,c: ");
    scanf("%d %d %d", &a, &b, &c);

    int d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("x1 = %.2f , x2 = %.2f", x1, x2);
    }
    else
    {
        printf("Input is not valid!");
    }

    return 0;
}

// d==0 ,d<0