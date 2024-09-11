#include<stdio.h>
int main() 
{
    int n, r, q = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while (n != 0) 
    {
        r = n % 10;
        q = q * 10 + r;
        n /= 10;
    }
    printf("the reverse of a number: %d", q);
    return 0;
}