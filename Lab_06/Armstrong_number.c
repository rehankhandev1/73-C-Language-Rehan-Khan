#include <stdio.h>
int main()
{
    int n, temp, digit, i, power, digits = 0, sum = 0;
    printf("REHAN KHAN\nEnter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        digits++;
        temp = temp / 10;
    }
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        power = 1;
        for(i = 1; i <= digits; i++)
            power = power * digit;
        sum = sum + power;
        temp = temp / 10;
    }
    if(sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}
