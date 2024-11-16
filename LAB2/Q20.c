#include<stdio.h>
int main()
{
    char op;
    int num1, num2, result;
    printf("Which operation do you want to execute(+, -, /, *)\n");
    scanf("%c", &op);
    printf("Enter 2 numbers\n");
    scanf("%d%d", &num1, &num2);
    switch(op)
    {
        case '+' :
        result = num1+num2;
        break;
        case '-' :
        result = num1-num2;
        break;
        case '/' :
        if (num2==0)
        {
            printf("error!");
            goto end;
        }
        else{
            result = num1/num2;
            }
            break;
        case '*' :
        result=num1*num2;
        break;
        deafult :
        printf("Invalid operator\n");
        }
        printf("Result= %d\n", result);
        end :
        return 0;
}