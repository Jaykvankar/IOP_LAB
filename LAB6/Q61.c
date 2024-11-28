#include<stdio.h>
#include<conio.h>
#define n 5
int main()
{
    int a[n], temp;
    printf("Enter Values in The Array");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j=n-1; j>=0; j--)
    {
    for(int i=0; i<j; i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    printf("Values after Selection Sort in Array :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
    getch();
    return 0;
}