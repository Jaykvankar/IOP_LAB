#include <stdio.h>
int main()
{
    double b, i, result=1, n=1;
    printf("Enter Base and Enter Index: \n");
    scanf("%lf%lf", &b, &i);
    if(i==0)
    {
        printf("The value = 1");
    }
    if(i>0)
    {
        while(n<=i)
    {
        result*=b;
        n=n+1;
    }
    }
    else
    {
       while(n>i)
    {
        result=result/b;
        i=i+2;
    } 
    }
    printf("the value = %lf", result);
    return 0;
}