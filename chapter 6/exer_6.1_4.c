#include <stdio.h>

int main () {
    int *p, q;
    p = &q;

    for(q=0; q<10; q++) printf("%d\n", *p);

    return 0;
}
