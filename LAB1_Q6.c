#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a, b");
    scanf("%d%d", &a, &b);
    printf("Value of a=%d, b=%d before swap\n", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a=%d, b=%d after swap", a, b);
    return 0;
    }