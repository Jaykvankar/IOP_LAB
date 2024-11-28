#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],*s1ptr=s1,s2[100],*s2ptr=s2;
    int count=0;
    printf("Enter the string elements\n");
    gets(s1);
    for(int i=0;i<strlen(s1);i++)
    {
        *(s2ptr+i)=*(s1ptr+strlen(s1)-1-i);
    }
    puts(s2);
    return 0;
}