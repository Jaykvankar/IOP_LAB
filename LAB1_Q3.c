#include <stdio.h>
int main()
{
    int f, c;
    printf("Enter Temerature in Degree Fahrenheit");
    scanf("%d", &f);
    c=(f-32)*5/9;
    printf("Degree Centigrade=%d", c);
    return 0;
}
