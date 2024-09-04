#include <stdio.h>
int main()
{
    int p, r, t, si;
    printf("Enter principal value, rate, time");
    scanf("%d%d%d", &p, &r, &t);
    si=p*r*t/100;
    printf("Simple Intrest=%d", si);
    return 0;
}
