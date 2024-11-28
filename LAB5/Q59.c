#include<stdio.h>
int main()
{
    int a[10], b[10], temp;
    printf("Enter values in Array 1");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter values in Array 2");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }
    for(int i=0; i<10; i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("Values after swap in Array 1:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nValues after swap in Array 2:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}