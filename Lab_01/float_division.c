#include <stdio.h>
int main(){

    int a;
    int b;
    float c;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    c=(float)a/b;
    printf("Result: %f", c);
    return 0;

}
