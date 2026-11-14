#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("REHAN KHAN\nEnter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            printf("Addition: %d", a + b);
            break;
        case '-':
            printf("Subtraction: %d", a - b);
            break;
        case '*':
            printf("Multiplication: %d", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Division: %d", a / b);
            else
                printf("Cannot divide by zero");
            break;
        case '%':
            if(b != 0)
                printf("Modulus: %d", a % b);
            else
                printf("Cannot divide by zero");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
