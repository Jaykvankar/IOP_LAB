#include<stdio.h>
#define n 3
int main()
{
    int a[n][n];
    int min, max, i=0,j=0;
    printf("Enter element in matrix a :\n");
    for(i;i<n;i++)
    {
        for(j; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int t=0;t<n-1; t++)
    {
        for(int x=0;x<n-1; x++)
        {
            if(a[t][x]<a[t+1][x+1])
            {
                min=a[t][x];
            }
        }
    }
    printf("%d", min);
    return 0;
}