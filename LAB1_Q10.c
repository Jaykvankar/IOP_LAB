#include <stdio.h>
int main()
{
    float p, m, c, cm, em;
    printf("Enter Physics marks, Enter Maths marks, Enter Chemistry marks, Entermarks obtained in entrnce exam");
    scanf("%f%f%f%f", &p, &m, &c, &em);
    cm=p/2 + m/2 + c/2 + em;
    printf("Cutoff marks of student:%f", cm);
    return 0;

}
