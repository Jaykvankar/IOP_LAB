#include<stdio.h>
int main()
{
    int n, r=0;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    while(n!=0)
    {
        r+=n%10;
        n=n/10;
    }
    printf("The sum of individual numbers of the number = %d", r);
    return 0;
}