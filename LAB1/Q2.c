#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, T, P;
    printf("Enter Marks of subject1, subject2, subject3, subject4, subject5");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    T=s1+s2+s3+s4+s5;
    P=T/5;
    printf("Total marks=%d, Percentage=%d", T, P);
    return 0;
}
