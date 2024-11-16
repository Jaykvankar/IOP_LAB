#include <stdio.h>

int main()
{
    char ch, c;
    printf("Enter a character: ");
    scanf("%c", &ch);
    c=(ch>='a'&& ch<='z')?printf("the given %c is a small case character", ch):(printf("the given character is not a small case latter"));
    return 0;
}