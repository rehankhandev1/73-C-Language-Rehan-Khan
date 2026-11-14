#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("REHAN KHAN\nEnter the value of n: ");
    scanf("%d", &n);
    printf("Numbers divisible by 3 but not by 5: ");
    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 != 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal count: %d", count);
    return 0;
}
