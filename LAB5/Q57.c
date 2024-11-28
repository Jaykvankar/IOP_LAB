#include <stdio.h>
int main()
{
    int n, sec_max = 0, max = 0, i = 1;
    printf("How many numbers do you want to compare?\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter number\n");
    scanf("%d", &a[0]);
    max = a[0];
    while (i < n)
    {
        scanf("%d", &a[i]);
        if (a[i]>max)
            {
            sec_max=max;
            max=a[i];
            }
        else if (a[i]>sec_max&&a[i]<max)
            {
            sec_max=a[i];
            }
        i++;
    }
    printf("The maximum number = %d, the second maximum = %d\n", max, sec_max);
    return 0;
}