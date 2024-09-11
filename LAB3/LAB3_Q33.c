#include <stdio.h>
int main()
{
    int n, a, min = 0, max, i = 1, x;
    printf("How many numbers do you want to compare?\n");
    scanf("%d", &n);
    printf("Enter a number\n");
    scanf("%d", &a);
    max = a;
    while (i < n)
    {
        printf("Enter another number\n");
        scanf("%d", &x);
        if (x>max)
            {
            min=max;
            max=x;
            }
        else if (x<min||min==max)
            {
            min=x;
            }
        i++;
    }
    printf("The maximum number = %d, the second maximum = %d\n", max, min);
    return 0;
}