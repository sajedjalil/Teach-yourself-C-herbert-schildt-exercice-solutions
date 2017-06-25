#include <stdio.h>

int main () {
    int *p , q;
    p= &q;

    q=1;
    printf("%p\n", p);

    *p++;
    printf("%d %p\n", q , p);

    printf("\n\n");

    p= &q;

    q=1;
    printf("%p\n", p);

    (*p)++;
    printf("%d %p\n", q , p);

    return 0;
}
