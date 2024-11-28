#include <stdio.h>
int main()
{
    unsigned n, i=1;
    printf("Enter a Odd number\n");
    scanf("%u", &n);
    if(n%2==1)
    {
        for(;i<=n;i=i+2)
    {
        printf("%d\t", i);
    }
    }
    if(n%2==0)
    {
        n=n-1;
        for(;i<=n;i=i+2)
    {
        printf("%d\t", i);
    }        
    }
    return 0;
}