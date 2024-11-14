#include<stdio.h>
int prime(int num);
int main()
{
    int num, result;
    printf("Enter a number to verify if a number is prime or not:\n");
    scanf("%d", &num);
    result=prime(num);
    printf("%d", result);
}
prime(int num)
{
    int i,flag=1;
    for(int b =2; b=num/2&&flag!=0; b++)
    {
        if(num%b==0)
        {
            flag=0;
        }
    }
        if(flag==1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
}
