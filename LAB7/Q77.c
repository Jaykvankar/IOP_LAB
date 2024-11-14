#include<stdio.h>
int palindrom(int num);
int main()
{
    int x,num,flag,result;
    printf("Enter a Number: ");
    scanf("%d", &num);
    x = num;
    result=palindrom(num);

    if(result==x)
    {
        printf("The Number is Palindrome");
    }
    else
    {
        printf("The Number is not Palindrome");
    }

}

int palindrom(int num)
{
    int q=0,r;
    while (num!=0) 
    {
        r=num%10;
        q=q*10+r;
        num/=10;
    }
    return q;
}