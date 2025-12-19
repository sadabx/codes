// Write a C program to find maximum and minimum among three numbers.
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three values ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > c && a > b)
    {
        printf("the largest among three is %d", a);
    }
    else if (b > c && b > a)
    {
        printf("the largest among three is %d", b);
    }
    else
    {
        printf("the largest among three is %d", c);
    }
    printf("\n");
    if (a < c && a < b)
    {
        printf("the smallest among three is %d", a);
    }
    else if (b < c && b < a)
    {
        printf("the smallest among three is %d", b);
    }
    else
    {
        printf("the smallest among three is %d", c);
    }
    return 0;
}