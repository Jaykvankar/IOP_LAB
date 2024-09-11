#include<stdio.h>
void main()
{
    unsigned n, x=1, result, e=0, o=0, i=0;
    printf("Enter a Number\n");
    scanf("%u", &n);
    for(x%2==1;x<=n;x=x+2){
        o+=x;
    }
    for(i%2==0;i<=n;i=i+2){
        e+=i;
    }
    printf("sum of odd number =%u\nsum of even number =%u", o, e);
}