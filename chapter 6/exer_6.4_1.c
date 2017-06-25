#include <stdio.h>

int main () {
    char *i = "One";
    char *j = "Two";
    char *k = "Three";

    printf("%s %s %s\n", i, j, k);
    printf("%s %s %s\n", i, k, j);
    printf("%s %s %s\n", j, k, i);
    printf("%s %s %s\n", j, i, k);
    printf("%s %s %s\n", k, i, j);
    printf("%s %s %s\n", k, j, i);

    return 0;
}
