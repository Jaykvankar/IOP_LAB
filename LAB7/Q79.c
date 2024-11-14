#include<stdio.h>
void exchange(int a, int b);
int main()
{
    int a, b;
    printf("The  Number 1 and Number 2 respectively: \n");
    scanf("%d%d", &a, &b);
    exchange(a,b);
}

void exchange(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("The value of Number 1 : %d\n", a);
    printf("The value of Number 2 : %d\n", b);
}