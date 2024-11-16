#include <stdio.h>
int main()
{
  int hour, min, sec, tsec=0;
  printf("enter time in hours, minutes and seconds respectively for total seconds\n");
  scanf("%d %d %d", &hour, &min, &sec);
  tsec +=hour*3600;
  tsec +=min*60;
  tsec +=sec;
  printf("total seconds: %d", tsec);
}