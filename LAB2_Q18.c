#include <stdio.h>
int main() {
    float num1, num2, num3;
    printf("Enter three numbers");
    scanf("%f %f %f", &num1, &num2, &num3);
    float max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    printf("\nThe maximum number is %.2f", max);
    return 0;
}