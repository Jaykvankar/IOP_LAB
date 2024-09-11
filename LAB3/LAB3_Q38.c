#include <stdio.h>
int main()
{
    unsigned n, i=1, x=0;
    printf("Enter a perfect square of a number\n");
    scanf("%u", &n);
    if(n%2==1)
    {
        for(; x<n; i++)
        {
            x=i*i;
            printf("%u\t", x);
        }
    }
    if(n%2==0)
    {
        for(; x<n; i++)
        {
            x=i*i;
            printf("%u\t", x);
        }
    }
    return 0;
}