#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i=0,j;
    char h[100],*p;
     p=h;
    
    printf("enter no.of strings you will enter\n");
    scanf("%d",&n);
    printf("your string can be max length of 100 characters\n");
    printf("enter strings\n");
    char s[n+1][100];
    while (i<=n)
    {
        fgets(s[i],100,stdin);
        i++;
    }

    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
           if((strcmp(s[i],s[j]))>0)
           {
               strcpy(h,s[j]);
               strcpy(s[j],s[i]);
               strcpy(s[i],h);
           }
        }
    }
        for(i=0;i<=n;i++)
    {
        printf("%s",s[i]);
    }
}