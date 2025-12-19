#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid \n");
        return 0;
    }

    int first = 0, second = 1, next;

    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }
    for (int i = 3; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;

        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
\
