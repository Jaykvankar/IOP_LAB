#include <stdio.h>

int main() {
    int n = 0, i = 1, c, terms = 10, a;
    printf("Fibonacci sequence: ");
    for (a=1; a<=terms; a++)
    {
        printf("%d ", i);
        c = n + i;
        n = i;
        i = c;
    }
    return 0;
}
