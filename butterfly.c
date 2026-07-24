#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Enter size: ");
    scanf("%d",&n);

    // Upper Half
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("*");

        for(j=1; j<=2*(n-i); j++)
            printf(" ");

        for(j=1; j<=i; j++)
            printf("*");

        printf("\n");
    }

    // Lower Half
    for(i=n-1; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf("*");

        for(j=1; j<=2*(n-i); j++)
            printf(" ");

        for(j=1; j<=i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

