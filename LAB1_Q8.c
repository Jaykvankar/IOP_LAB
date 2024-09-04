#include <stdio.h>
int main()
{
    int sec, day, hour, min;
    printf("Enter no of sec a revolution of earth");
    scanf("%d",&sec);
    day=sec/86400;
    hour=day*24;
    min=hour*60;
    printf("Day=%d, hour=%d, min=%d", day, hour, min);
    return 0;
}
