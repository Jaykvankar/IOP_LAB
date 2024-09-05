#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c){
    printf("A is the Greatest Number");
    }
    else if (b>c && b>a)
    {
        printf("B is the Greatest Number");
    }
    else{
        printf("C is the Greatest Number");
    }
}
