#include<stdio.h>
int main()
{
    int i;
    double n, result;
    printf("Enter the number you want table of:\n");
    scanf("%lf", &n);
    for(i=1; i<=10; i++)
    {
        result = n*i;
        printf("%.lf x %d = %.lf\n", n, i, result);
    }
    return 0;
}