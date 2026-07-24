#include<stdio.h>

int main()
{
    int a[4][4];
    int top=0, bottom=3, left=0, right=3;
    int num=1, i;

    while(top<=bottom && left<=right)
    {
        for(i=left; i<=right; i++)
            a[top][i]=num++;
        top++;

        for(i=top; i<=bottom; i++)
            a[i][right]=num++;
        right--;

        for(i=right; i>=left; i--)
            a[bottom][i]=num++;
        bottom--;

        for(i=bottom; i>=top; i--)
            a[i][left]=num++;
        left++;
    }

    printf("\nSpiral Matrix:\n");

    for(i=0; i<4; i++)
    {
        int j;
        for(j=0; j<4; j++)
            printf("%3d ", a[i][j]);

        printf("\n");
    }

    return 0;
}
