#include <stdio.h>
int main()
{
    int n, a, sec_max = 0, max = 0, i = 1, x;
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
            sec_max=max;
            max=x;
            }
        else if (x>sec_max&&x<max)
            {
            sec_max=x;
            }
        i++;
    }
    printf("The maximum number = %d, the second maximum = %d\n", max, sec_max);
    return 0;
}
