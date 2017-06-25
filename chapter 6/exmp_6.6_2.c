#include <stdio.h>

int main (void) {
    char *p , **mp, str1[80];

    p = str1;
    mp = &p;

    printf("Enter your name\n");
    gets(*mp);

    printf("Hi %s\n", *mp);

    return 0;
}
