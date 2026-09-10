#include <stdio.h>

int main()
{
    int a=20;
    int b=10;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("REHAN KHAN\n");
    printf("AND operation: %d\n", a & b);
    printf("OR operation: %d\n", a | b);
    printf("NOT operation: %d\n", ~a);
    printf("NOT operation: %d\n", ~b);
    printf("XOR operation: %d\n", a ^ b);
    printf("XOR operation: %d\n", a << b);
    printf("XOR operation: %d\n", a >> b);


    return 0;

}