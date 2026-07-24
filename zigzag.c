#include<stdio.h>

int main()
{
    int i, j;

    for(i=1; i<=3; i++)
    {
        for(j=1; j<=9; j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
