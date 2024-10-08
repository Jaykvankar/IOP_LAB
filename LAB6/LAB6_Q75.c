#include<stdio.h>
#define n 5
int main()
{
    int i=1,j=1,space=1;
    for(;i<=n;i++)
    {
        for(;space<=n-i;space++)
        {
            printf(" ");
        }
        for(; j=i;j++)
        {
            printf("%d", j);
        }
    }
}