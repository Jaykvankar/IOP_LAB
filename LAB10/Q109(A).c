#include <stdio.h>

int main()
{
    int x, n, *ptr;
    printf("Enter the number: ");
    scanf("%d", &x);
    ptr = &x;

    printf("Enter the number to change: ");
    scanf("%d", &n);
    *(ptr) = n;

    printf("Updated value: %d\n", x);
    return 0;

}