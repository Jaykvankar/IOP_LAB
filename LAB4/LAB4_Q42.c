#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, flag=1;
    printf("Number please :\n");
    scanf("%d", &n);
    for(int b =2; b=n/2&&flag!=0; b++)
    {
        if(n%b==0)
        {
            flag=0;
        }
        if(flag==1)
        {
            printf("the number is prime");
        }
        else
        {
            printf("the number is composite");
        }
    }
    getch();
    return 0;
}