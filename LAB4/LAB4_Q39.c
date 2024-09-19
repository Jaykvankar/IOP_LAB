#include <stdio.h>
int main()
{
    double n1, n2=1, n3=1,r=0;
    printf("Enter the  positive number please:\n");
    scanf("%lf", &n1);
    
    while(n2<=n1)
    {
        n3*=n2;
        r+=n2/n3;
        n2=n2+1;
        if(n1<0)
    {
        printf("\tError");
    }
    }
    printf("The Summation : %6.8lf",r);
    return 0;
}