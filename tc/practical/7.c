// Write a C program to find the factorial of an integer.

#include <stdio.h>

int main()
{
    int a, f = 1;

    //! 4= 1*2*3*4=24

    printf("enter the number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        f = i * f;
    }
    printf("factorial is %d", f);

    return 0;
}