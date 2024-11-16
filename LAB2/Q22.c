#include <stdio.h>
int main()
{
    int n1, n2=1, n3=1;
    printf("Enter the number which you want factorial of:\n");
    scanf("%d", &n1);
    while(n2<=n1)
    {
        n3*=n2;
        n2=n2+1;
    }
    printf("The factorial of the given number is: %d",n3);
    return 0;
}