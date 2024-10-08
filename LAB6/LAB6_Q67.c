#include<stdio.h>
#define n 2
int main()
{
    int a[n][n], b[n][n], c[n][n], temp;
    printf("Enter the Array A Element");
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the Array B Element");
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("The Subtraction of 2 array :\n");
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}