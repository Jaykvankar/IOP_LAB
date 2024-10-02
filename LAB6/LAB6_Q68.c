#include<stdio.h>
#define n 3
int main()
{
    int a[n][n], b[n][n], c[n][n], temp[n][n];
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
    
    for(int i=n-1;i>=0; i--)
    {
        for(int j=n-1;j>=0; j--)
        {
            temp[j][i]=b[i][j];
        }
    }


    printf("The multiplication of 2 array :\n");
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n; j++)
        {
            c[i][j]=a[i][j]*temp[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}