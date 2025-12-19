// Write a C program to display all elements of an array and also calculate sum of elements of that array.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input each element
        sum += arr[i];        // Add to sum
    }

    printf("Array elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Display each element
    }

    printf("\nSum of elements = %d\n", sum);

    return 0;
}
