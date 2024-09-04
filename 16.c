#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter 3 no");
    scanf("%f%f%f", &a, &b, &c);
    if(a>b){
        if(a>c)
        printf("The Greatest Digit is a=%.2f", a);
        else
        printf("The Greatest Digit is c=%.2f", c);
    }
    if(b>c){
        printf("The Greatest Digit is b=%.2f", b);
    }
    return 0;
}