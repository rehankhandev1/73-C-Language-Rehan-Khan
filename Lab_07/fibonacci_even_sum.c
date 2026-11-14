#include <stdio.h>
int main()
{
    int n, i, num1 = 0, num2 = 1, nextnum, sum = 0;
    printf("REHAN KHAN\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(i = 1; i <= n; i++)
    {
        printf("%d ", num1);
        if(num1 % 2 == 0)
            sum = sum + num1;
        nextnum = num1 + num2;
        num1 = num2;
        num2 = nextnum;
    }
    printf("\nSum of even terms: %d", sum);
    return 0;
}
