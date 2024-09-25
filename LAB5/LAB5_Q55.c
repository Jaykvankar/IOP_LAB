#include<stdio.h>
#include<conio.h>
#define n 10
int main()
{
    int a[n], sum=0, e=0, o=0;
    printf("Enter the 10 numbers\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &a[i]);
        if(a[i]%2==0)
        {
            printf("e");
           e+=1; 
        }
        else
        {
            o+=1;
        }
    }
    printf("number of odd number: %d, number of even number: %d", o, e);
    return 0;  
}