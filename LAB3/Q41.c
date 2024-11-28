#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i=1;
    printf("Enter a Number, You want Factors of\n");
    scanf("%d", &n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d\t", i);
        }
        i++;
    }
    return 0;
}