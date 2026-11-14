#include <stdio.h>
int main()
{
    int n, temp, digit, rev = 0;
    printf("REHAN KHAN\nEnter a number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if(rev == n)
        printf("%d is a palindrome number", n);
    else
        printf("%d is not a palindrome number", n);
    return 0;
}
