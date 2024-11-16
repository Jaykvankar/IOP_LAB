#include<stdio.h>
int main()
{
    int b, h, Area;
    printf("Enter Base, Height");
    scanf("%d%d", &b,&h);
    Area=b*h/2;
    printf("Area=%d", Area);
    return 0;
}