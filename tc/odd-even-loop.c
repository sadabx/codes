#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

	printf("\nOdd number \n");
	for (int  i=0; i <=n  ; i++ )
    {
        if(i%2 != 0) {
            printf("%d ",i);
        }
	}

	printf("\nEven number \n");
	for (int  i=0; i <=n  ; i++ )
    {
        if(i%2 == 0) {
            printf("%d ",i);
        }
	}
return 0;
}

