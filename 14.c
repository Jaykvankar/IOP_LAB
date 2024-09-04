#include <stdio.h>
int main()
{
  char cha;
  int avalue;
  printf("Enter your character here:\n");
  scanf("%c", &cha);
  avalue = cha;
  if (avalue >= 65 && avalue <= 90)
  {
    printf("The character is a Capital Case Letter");
  }
  else if (avalue >= 48 && avalue <= 57)
  {
    printf("The character is a Digit");
  }
  else if (avalue >= 97 && avalue <= 122)
  {
    printf("The character is a small case Letter");
  }
  
  else if ((avalue >= 32 && avalue <= 47) ||
           (avalue >= 58 && avalue <= 64) ||
           (avalue >= 91 && avalue <= 96) ||
           (avalue >= 123 && avalue <= 126))
  {
    printf("The character is a Special Character\n");
  }
  else
  {
    printf("invalid character\n");
  }
  return 0;
}