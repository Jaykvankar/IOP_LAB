#include<stdio.h>
int main()
{
    int n, r, q=0, x;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    x=n;
    while(n!=0)
    {
        r=n%10;
        q+=r*r*r;
        n=n/10;
    }
    if(q==x)
    {
        printf("The number is a Armstrong Number");
    }
    else
    {
        printf("The number is not a Armstrong Number");
    }
    return 0;
}