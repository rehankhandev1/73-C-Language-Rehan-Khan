#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
};
int main()
{
    union Data d;
    printf("REHAN KHAN\n");
    printf("Size of union: %d bytes\n", (int)sizeof(d));
    d.i = 10;
    printf("d.i = %d\n", d.i);
    d.f = 3.14;
    printf("d.f = %.2f\n", d.f);
    printf("d.i now = %d (memory is shared)\n", d.i);
    d.c = 'A';
    printf("d.c = %c\n", d.c);
    return 0;
}
