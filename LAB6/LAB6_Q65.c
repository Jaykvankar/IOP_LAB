#include<stdio.h>
#define n 3
int main()
{
    int a[n][n],b[n][n], temp;
    printf("Enter the Array Element");
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The Matrix Before Transpose\n");
    for(int t=0;t<n;t++)
    {
        for(int x=0; x<n; x++)
        {
            printf("%d\t", a[t][x]);
        }
        printf("\n");
    }
    for(int i=n-1;i>=0; i--)
    {
        for(int j=n-1;j>=0; j--)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("The Matrix after Transpose\n");
    for(int t=0;t<n;t++)
    {
        for(int x=0; x<n; x++)
        {
            printf("%d\t", b[t][x]);
        }
        printf("\n");
    }
    return 0;
}