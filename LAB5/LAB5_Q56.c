#include<stdio.h>
#include<conio.h>
#define n 10
int main()
{
    int a[n], p=0, ne=0, x=0;
    printf("Enter the 10 numbers\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &a[i]);
        if(a[i]>0)
        {
           p+=1; 
        }
        if(a[i]<0)
        {
            ne+=1;
        }
        else
        {
            x+=1;
        }
    }
    printf("number of odd number= %d,\nnumber of even number= %d and \nnumber of zeros = %d", p, ne, x);
    return 0;  
}