#include <stdio.h>
int main()
{
    int sec, hr, min;
    printf("Enter second");
    scanf("%d", &sec);
    hr=sec/3600;
    min=sec/60-60;
    sec=sec-hr*3600-min*60;
    printf("Time=%d:%d:%d", hr, min, sec);
    return 0;
}
