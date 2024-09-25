#include<stdio.h>
#include<conio.h>
#define n 10
int main()
{
    int a[n], sum=0;
    printf("Enter the 10 numbers, you want sum of\n");
    scanf("%d", &a[0]);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        printf("Another number\n");
        sum+=a[i];
    }
    printf("the sum : %d", sum);    
}