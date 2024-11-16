#include<stdio.h>
int main()
{
    char op, a, s, d, m;
    int num1, num2, result;
    printf("Which operation do you want to execute(+, -, /, *)\n");
    scanf("%c", &op);
    if(op=='+')
    {
        op='a';
    }
    else if(op=='-')
    {
        op='s';
    }
    else if(op=='/')
    {
        op='d';
    }
    else if(op=='*')
    {
        op='m';
    }
    printf("Enter 2 numbers\n");
    scanf("%d%d", &num1, &num2);
    switch(op)
    {
        case 'a' :
        result = num1+num2;
        break;
        case 's' :
        result = num1-num2;
        break;
        case 'd' :
        if (num2==0)
        {
            printf("error!");
            goto end;
        }
        else{
            result=num1/num2;
            }
            
        case 'm' :
        result=num1*num2;
        break;
        deafult :
        printf("Invalid operator\n");
        }
        printf("Result= %d\n", result);
        end :
        return 0;
}