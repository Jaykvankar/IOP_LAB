#include<stdio.h>
void Armstrong(int num);
int main()
{
    int n;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    Armstrong(n);
}
void Armstrong(int n)
{
int r, q=0, x;
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
}