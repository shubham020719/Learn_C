#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i <= n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}