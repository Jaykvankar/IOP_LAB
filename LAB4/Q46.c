#include <stdio.h>
int main()
{
    unsigned n, i=0;
    printf("Enter a even number\n");
    scanf("%u", &n);
    if(n%2==0)
    {
        for(;i<=n;i=i+2)
    {
        printf("%d\t", i);
    }
    }
    if(n%2==1)
    {
        n=n-1;
        for(;i<=n;i=i+2)
    {
        printf("%d\t", i);
    }        
    }
    return 0;
}