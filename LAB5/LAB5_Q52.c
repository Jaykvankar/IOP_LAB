#include<stdio.h>
#define n 5
int main()
{
    int j;
    for(int i=1; i<=n; i++)
    {
        for(int space=1; space<=n-i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}