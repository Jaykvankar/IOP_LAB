#include<stdio.h>
#define n 5
int main()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i==j)
            {
                printf("1");
            }
            else printf("0");
        }
        printf("\n");
    }
}