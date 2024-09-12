#include <stdio.h>
int main()
{
    int n, a, min, max , i = 1, x;
    printf("How many numbers do you want to compare?\n");
    scanf("%d", &n);
    printf("Enter a number\n");
    scanf("%d", &a);
    min = a;
    while (i < n)
    {
        printf("Enter another number\n");
        scanf("%d", &x);
        if (x<min)
            {
            max=min;
            min=x;
            }
        else if (x>min)
            {
            max=x;
            }
        else if (x>max)
            {
            min=max;
            max=x;
            }
        else if (x>min&&x<max)
            {
            min=x;
            }
        i++;
    }
    printf("The maximum number = %d, the second maximum = %d\n", max, min);
    return 0;
}
