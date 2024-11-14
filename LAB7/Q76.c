#include<stdio.h>
void evenodd(int num);
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d", &num);
    evenodd(num);
}

void evenodd(int num)
{
    if(num%2==0)
    {
        (printf("The Number is even"));
    }
    else
    {
        (printf("The Number is odd"));
    }
}
