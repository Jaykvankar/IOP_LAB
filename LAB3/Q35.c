#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    while(n>10)
    {
        while(n!=0)
        {
        sum+=n%10;
        n=n/10;
        }
        n=sum;
    }
    printf("The sum of individual numbers of the number = %d", n);
    return 0;
}