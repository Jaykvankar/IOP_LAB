#include<stdio.h>
int main()
{
    int n, r=0, x, y;
    printf("Enter a Number : \n");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        printf("As number=%n,\nenter x", n);
        scanf("%d", &x);
        y= 1+x;
        break;
        case 3:
        printf("As number=%n,\nenter x", n);
        scanf("%d", &x);
        y= 1+x*x*x;        
        break;
        case 2:
        printf("As number=%d,\nenter x", n);
        scanf("%d", &x);
        y=1+x/2;
        break;
        default:
        printf("As the number is %d,\nenter x", n);
        scanf("%d", &x);
        y=1+n*x;
    }
    printf("Y= %d", y);
}