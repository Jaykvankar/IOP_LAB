#include<stdio.h>
#include<math.h>
int isfibo(int num);
int main()
{
    int T,j=0;
    printf("Enter how many Number you want to check");
    scanf("%d",&T);
    int flag[T],num[T];
    printf("Enter the numbers:\n");
    while(j<T)
    {
        scanf("%d",&num[j]);
        flag[j]=isfibo(num[j]);
        j++;
    }
    printf("The Numbers are respectively \n");
    for(int i=0;i<T;i++)
    {
        if(flag[i]==1)
        {
            printf("Is Fibo\n");
        }
        else
        {
            printf("Not Fibo\n");
        }
    }
    return 0;
}



int isfibo(int num)
{
    int digit1,digit2,ps1,ps2;
    digit1=5*num*num-4;
    digit2=5*num*num+4;
    ps1=sqrt(digit1);
    ps2=sqrt(digit2);
    if(ps1*ps1==digit1||ps2*ps2==digit2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}