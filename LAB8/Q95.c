#include <stdio.h>
#include <string.h>
struct employee
{
    int emp_id;
    char name[50];
    float basic_salary;
};
int main() 
{
    int n,i;
    printf("enter number of employees");
    scanf("%d",&n);
    struct employee e[100];
    for(i=0;i<n;i++)
    {
        printf("enter employee id:");
        scanf("%d",&e[i].emp_id);
        printf("enter name of employee:");
        scanf("%s",&e[i].name);
        printf("enter  basic pay:");
        scanf("%f",&e[i].basic_salary);
    }
    printf("emp id\tname\tbasicpay\n");
    for(i=0;i<n;i++)
    {
        
        printf("%d\t",e[i].emp_id);
        
        printf("%s\t",e[i].name);
        
        printf("%f\t",e[i].basic_salary);
        printf("\n");
    }
    
    return 0;
}