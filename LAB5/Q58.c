#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10], b[10], sum[10];
    printf("Enter numbers in Array 1");
    
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter numbers in Array 2\n");
    for(int i=0; i<=9; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Sum of two Array : ");
    for(int i=0; i<10; i++)
    {
        sum[i]=a[i]+b[i];
        printf("%d\t", sum[i]);
    }
}