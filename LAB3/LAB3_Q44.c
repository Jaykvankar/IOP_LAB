#include <stdio.h>
#include<conio.h>
int main() {
    double tCharge, u;
    printf("Enter the consumption in units: ");
    scanf("%lf", &u);
    if (u >= 0 && u <= 200)
        {
        tCharge = u * 0.50;
        } 
    else if (u > 200 && u <= 400) 
        {
        tCharge = 100 + (u - 200) * 0.65;
        } 
    else if (u > 400 && u <= 600) 
        {
        tCharge = 230 + (u - 400) * 0.80;
        } 
    else if (u > 600) 
        {
        tCharge = 425 + (u - 600) * 125;
        } 
    else 
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("Total charge: Rs. %.2lf\n", tCharge);
    getch();
    return 0;
}
