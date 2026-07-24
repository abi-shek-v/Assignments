#include <stdio.h>

int main()
{
    int i, j, n,k, coef;
  
  printf("Enter rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
coef =1;
for(k=1;k<=n-i;k++){
printf("  ");
}
        for(j = 1; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
