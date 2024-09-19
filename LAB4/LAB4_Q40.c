#include<stdio.h>
#include<conio.h>
int main()
{
    double n, i=-1, x;
    printf("Number\n");
    scanf("%lf", &n);
    label:
    printf("Another number\n");
    scanf("%lf", &x);
    if(x>=0)
    {
        n=n+x;
        goto label;
    }
    if(x<0);
    {
        goto end;
    }
    end:
    printf("The sum = %8.4lf", n);
    getch();
    return 0;
}