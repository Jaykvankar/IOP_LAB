#include<stdio.h>
int main()
{
    char s[100],*sptr=s;
    int count=0;
    printf("Enter the string elements");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(*(sptr+i)==' ')
        {
            count++;
        }
    }
    printf("string's length with space: %d\n",strlen(s));
    printf("String length without space: %d\n",(strlen(s)-count));
    return 0;
}