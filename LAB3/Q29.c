#include<stdio.h>
int main() 
{
    int n, r, q = 0, x;
    printf("Enter a Number: ");
    scanf("%d", &n);
    x = n;

    while (n != 0) 
    {
        r = n % 10;
        q = q * 10 + r;
        n /= 10;
    }

    if (q == x) 
    {
        printf("The number is a palindrome.\n");
    } 
    else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}