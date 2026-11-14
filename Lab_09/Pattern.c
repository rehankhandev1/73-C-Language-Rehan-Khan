#include <stdio.h>
int main()
{
    int n, i, j;
    printf("REHAN KHAN\nEnter the number of rows: ");
    scanf("%d", &n);
    printf("\nRight triangle:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    printf("\nPyramid:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    printf("\nNumber pattern:\n");
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
