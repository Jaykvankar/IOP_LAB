#include<stdio.h>
#include<conio.h>
int main()
{
    double a, i, c;
    printf("Amount\n");
    scanf("%lf", &a);
    if(a<=500)
    {
        c=5/100*a;
        printf("The commission of the sales man is:\n%.4lf", c);
    }
    if(a>500&&a<=2000)
    {
        c=35+1/10*a;
        printf("The commission of the sales man is:\n%.4lf", c);
    }
    if(a>2000&&a<=5000)
    {
        c=185+12/100*a;
        printf("The commission of the sales man is:\n%.4lf", c);
    }
    else
    {
        c=12.5/100*a;
        printf("The commission of the sales man is:\n%.4lf", c);
    }
    getch();
    return 0;
}