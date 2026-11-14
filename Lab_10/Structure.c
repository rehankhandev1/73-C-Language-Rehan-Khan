#include <stdio.h>
struct Student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct Student s[3];
    int i;
    printf("REHAN KHAN\n");
    for(i = 0; i < 3; i++)
    {
        printf("Enter roll no, name and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nRoll\tName\tMarks\n");
    for(i = 0; i < 3; i++)
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}
