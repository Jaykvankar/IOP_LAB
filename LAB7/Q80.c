#include<stdio.h>
int fibo(int limit);
int main()
{
    int limit,j=0;
    printf("Enter how many umber do you want of FIBONACCI NUMBERS");
    scanf("%d", &limit);
    while(j<limit)
    {
    printf("%d",fibo(j));
    j++;
    }
}

int fibo(int limit)
{
    int n = 1, i = 0, c;
    for (int a=1; a<=limit; a++)
    {
        return i;
        c = n + i;
        n = i;
        i = c;
    }
}