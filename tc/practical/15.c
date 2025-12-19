// Write a C program to perform all basic string handling operations.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[200];

    // Input strings
    printf("Enter first string: ");
    gets(str1); // ⚠️ Use fgets in real code to avoid buffer overflow
    printf("Enter second string: ");
    gets(str2);

    // Length
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // Copy
    strcpy(str3, str1);
    printf("Copied str1 into str3: %s\n", str3);

    // Concatenation
    strcat(str3, str2);
    printf("Concatenated str1 and str2 into str3: %s\n", str3);

    // Comparison
    if (strcmp(str1, str2) == 0)
        printf("str1 and str2 are equal\n");
    else
        printf("str1 and str2 are not equal\n");

    // Reverse str1
    int len = strlen(str1);
    printf("Reversed str1: ");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
}
