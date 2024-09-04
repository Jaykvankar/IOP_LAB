#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, T, P;
    printf("Enter Marks of subject1, subject2, subject3, subject4, subject5");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    T=s1+s2+s3+s4+s5;
    P=T/5;
    printf("Total marks=%d,\nPercentage=%d\n", T, P);
    if (P>=90){
        printf("Your Division is A+");
    }
    else if (P>=80){
        printf("Your Division is A");
    }
    else if(P>=70){
        printf("Your Division is B+");
    }
    else if(P>=60){
    printf("Your Division is B");
    }
    else if(P>=55){
        printf("Your Division is C+");
    }
    else if (P>=50){
        printf("Your Division is C");
    }
    else{
        printf("Your Division is F");
    }
    return 0;
}
