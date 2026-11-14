#include <stdio.h>
int main()
{
    int arr[50], n, i, sum = 0, max, min;
    printf("REHAN KHAN\nEnter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    min = arr[0];
    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / n);
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    printf("Reverse: ");
    for(i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}
