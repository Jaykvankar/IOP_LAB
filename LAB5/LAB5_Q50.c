#include<stdio.h>
#define n 5
int main()
{
    for(int i='A'; i<='A'+ n; i++ )
    {
       for(int j=1; j<=i-64; j++)
       {
            printf("%c", i);
       }
       printf("\n");
    }
    return 0;
}