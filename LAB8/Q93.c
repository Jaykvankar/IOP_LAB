#include<stdio.h>
#include<string.h>
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
    printf("Total number of words in the string are : %d\n",(strlen(s)-count));
    return 0;
}