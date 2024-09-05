#include <stdio.h>
int main()
{
    int gs, bs, hra, oa;
    printf("Enter Basic salary, HRA, Other Allowances, respectively : \n");
    scanf("%d%d%d", &bs, &hra, &oa);
    gs=bs + hra + oa;
    printf("The Gross salary = %d", gs);
    return 0;
}
