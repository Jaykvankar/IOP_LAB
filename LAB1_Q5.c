#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a, b");
    scanf("%d%d", &a, &b);
    printf("Value of a=%d, b=%d before swap\n", a, b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("Value of a=%d, b=%d after swap", a, b);
    return 0;
    }