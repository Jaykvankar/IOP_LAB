#include<stdio.h>
#include<conio.h>
#define n 5
int main()
{
    int a[n], b[n];
    printf("Enter Values in The Array");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0, j=n-1;i<n; i++)
    {
        for(int j=n-1; j>=0; j--)
        {
            b[i]=a[j];
        }
    }
    printf("Values after Reversing the Array :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", b[i]);
    }
    getch();
    return 0;
}